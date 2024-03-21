#ifndef SORTING_ALGORITHMS_QUICKSORT_H
#define SORTING_ALGORITHMS_QUICKSORT_H
#include <vector>
using namespace std;

// quicksort

template <typename T>
class QuickSort
{
public:
//UWAGA Przy pracy z vector index pamiętaj że wskazuje on na zerowy element kończący tablice!!!
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        //war konieczny
        if(end-1 <= start ){
            return;
        }
        //deklaracje lewego iteratora(puźniejszy piwot) rozmiaru(powrót do start) schowka tymczasowego
        typename vector<T>::iterator left = start - 1;
        unsigned size = end - start; 
        T temporary_value;

        //główne ciało algorytmu
        for(start; start < end ; start++){
            if(*start <= *(end-1)){
                left++;
                temporary_value = *start;
                *start = *left;
                *left = temporary_value;
            }    
        }
        sort((start - size), left);
        sort((left + 1), end);
    };
};
#endif //SORTING_ALGORITHMS_QUICKSORT_H
