#ifndef SORTING_ALGORITHMS_INSERTSORT_H
#define SORTING_ALGORITHMS_INSERTSORT_H
#include <vector>
using namespace std;

// sortowanie przez wstawianie

template <typename T>
class InsertSort
{
private:
int size;
T temporary_value;
//zwykły swap
/*void swap(typename std::vector<T>::iterator val1, typename std::vector<T>::iterator val2){
    temporary_value = *(val1);
    *(val1) = *(val2);
    *(val2) = temporary_value;
};*/
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
{
    size = end - start;
for (int i = 1; i < size; i++) {
    temporary_value = *(start + i);
    int j = i - 1;
    while (j >= 0 && *(start + j) > *(start + i)) {
       *(start + j + 1) = *(start + j);
       j = j - 1;
    }
    *(start + j + 1) = temporary_value;
}
}
};
#endif //SORTING_ALGORITHMS_INSERTSORT_H
