#include <iostream>
#include "../include/algorithms/mergesort.h"
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> wektor{1,4,34,232,56,22,100,23,9,66,44,23,11,44,22,3,7};
    MergeSort<int>  test1;
    test1.sort(wektor.begin(),wektor.end());
    std::cout<< "Tu wykonujemy testy efektywności algorytmów"<<std::endl;
    /*for(int i = 0; i<16; i++){
        cout<<wektor[i]<<endl;
    }*/
    return 0;
}
