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


            // create temparaty variables to hold the values that would be merged

    int leftArray_Size, rightArray_Size ;

    int temp_L_array , temp_R_array ;

            // copy data from og array into the temporary arrays 

            // we are fisrt going to use a conditional too check if we are in bounds of array size 

    for (int i = 0 ; i < leftArray_Size ; i++ ) {

        temp_L_array[i] = array[low + 1] ;
    }

    for(int j = 0 ; j < rightArray_Size ; j++) {

        temp_R_array[i] = array[mid_Point + 1 + j] ;
    }


            // now we have to check which is smaller and put it back in the og array 

                // but first lets set the local indexes to 0 , and 

                    // make a variable called bottom to keep track of where we are in the array 

                            // uodating it by one once data is coppied 


                            // we are going to use a while loop to make ssure our indexes are within bound

        int i = 0 ;

        int j = 0 ;

        int bottom = low ;


        while (i < leftArray_Size && j < rightArray_Size ) {

            if (temp_L_array[i] <= temp_R_array[j]) {

                array[bottom] = temp_L_array[i] ;

                i++ ;

            } else {

                array[bottom] = temp_R_array[j] ;
            }

            bottom++ ;


        }

 }

     