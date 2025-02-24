#include<stdio.h>

void mergeSort (int array, int low , int high ) ;

void combine(int array, int low, int mid_Point, int high ) ;

int main () {

    int numbers [] = {12, 12, 3, 15, 75, 2, 86, 6, } ;

    int size = sizeof(numbers) / sizeof(numbers[0]) ; 

    mergeSort ( numbers, 0 , size - 1) ;
}


void mergeSort (int array, int low , int high ) {

    // check the base condition 

    // make sure array is at leat more than one elelment , arrays with one elements are sorted 

    if (low < high) {

        int mid_Point = low + (high - low) / 2 ;

        // recursively divide the array down to one element on each side 

        mergeSort(array , low , mid_Point) ;

        mergeSort(array, mid_Point +1 , high) ;

        //combine the two indivisual arrays 

        combine(array, low, mid_Point, high ) ;
    }
}



void combine(int array, int low, int mid_Point, int high ) {
    
}