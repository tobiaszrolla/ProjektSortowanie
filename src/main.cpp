#include <iostream>
#include "../include/algorithms/mergesort.h"
#include "../include/algorithms/quicksort.h"
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> wektor{ 1, 1, 11, 3, 7, 6, 8, 13, 18, 20, 25, 102, 103 };
    for(int i = 0; i<wektor.size(); i++){
        cout<<wektor[i]<<endl;
    }
    QuickSort<int>  test1;
    test1.sort(wektor.begin(),wektor.end());
    std::cout<< "Tu wykonujemy testy efektywności algorytmów"<<std::endl;
    for(int i = 0; i < wektor.size(); i++){
        cout<<wektor[i]<<endl;
    }
    return 0;
}
