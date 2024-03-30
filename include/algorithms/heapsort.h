#ifndef SORTING_ALGORITHMS_HEAPSORT_H
#define SORTING_ALGORITHMS_HEAPSORT_H
#include <vector>
using namespace std;

// sortowanie przez kopcowanie. Należy samodzielnie zaimplementować odpowiedni kopiec, który kopcuje bez użycia dodatkowej pamięci.

template <typename T>
class HeapSort
{
private:
    // pomocnicze zmienne i funkcje lr child i parent; 
    int last_parent;
    int last_ele;
    T temporary_value;
    int parent(int i){return (i>>1);};
    int left(int i){return (i<<1) + 1;};
    int right(int i){return (i<<1) + 2;};
    //zwykły swap
    void swap(typename std::vector<T>::iterator val1, typename std::vector<T>::iterator val2){
        temporary_value = *(val1);
        *(val1) = *(val2);
        *(val2) = temporary_value;
    };
    void heapify(typename std::vector<T>::iterator start, int last, int i)
{
    int largest = i; // pozwala określić zmienną do zamiany
    int l = left(i);
    int r = right(i);
 
    //Wybiera lewy albo prawy
    if (l < last && *(start + l) > *(start + largest))
        largest = l;
 
    if (r < last && *(start + r) > *(start + largest))
        largest = r;
 
    if (largest != i){
        swap(start + i, start + largest);
    //rekurencja
        heapify(start,last, largest);
    }
}
 
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        last_ele = end - start - 1;
        last_parent = parent(last_ele);
        //tworzymy kopiec max
        for(int i = last_parent; i >= 0; i--){
            heapify(start, last_ele + 1,i);
        }
        //wykorzystując gwarancje tego że pierwszy element jest największy zmieniamy go z ostat
        //nim i naprawiamy kopiec
        for(int i = last_ele; i >= 0; i--){
            swap(start,start + i);
            heapify(start,i,0);
        }
    }
};
#endif //SORTING_ALGORITHMS_HEAPSORT_H
