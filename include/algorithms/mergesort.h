#ifndef SORTING_ALGORITHMS_MERGESORT_H
#define SORTING_ALGORITHMS_MERGESORT_H
#include <vector>
using namespace std;

// sortowanie przez scalanie

template <typename T>
class MergeSort
{
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        //warunek zakończenia i rozmiar
        int size = end - start;
        if(size <= 1){
            return;
        }
        //tworzenie pod tablic warunek podzielności
        typename std::vector<T>::iterator half = start + size/2;
        typename std::vector<T> left;
        typename std::vector<T> right;
        left.assign(start, half);
        right.assign(half,end);
        //rekurencja
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        //sortowanie
        int i =0;
        int j = 0;
        while(i < left.size() && j < right.size()){
            if(left[i] < right[j]){
                *start = left[i];
                start++;
                i++;
            }
            else{
                *start = right[j];
                start++;
                j++;
            }
        }
        while(i < left.size()){
            *start= left[i];
            start++;
            i++;
        }
        while(j < right.size()){
            *start = right[j];
            start++;
            j++;
        }
    };
};
#endif //SORTING_ALGORITHMS_MERGESORT_H
