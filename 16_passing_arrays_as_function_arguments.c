#include <stdio.h>

// declaring array as a function parameter
int array_sum(int arr[], int size){
    int total = 0;
    for (int i=0; i<size; i++){
        total += arr[i];
    }

    // changing arr element at index 0
    arr[0] = 10;

    return total;
}

int array_two_dimensional_sum(int arr[2][3], int size_x, int size_y){
    int total = 0;
    for (int i=0; i<size_x; i++){
        for (int j=0; j<size_y; j++){
            total += arr[i][j];
        }
    }
    return total;
}


// declaring a pointer
int max(int* arr, int size){
    int max_value = 0;
    for (int i=0; i<size; i++){
        if (max_value < *(arr+i)){
            max_value = *(arr+i);
        }
    }
    
    // --------- OR ---------
    
    // for (int i=0; i<size; i++){
    //     if (max_value < arr[i]){
    //         max_value = arr[i];
    //     }
    // }

    return max_value;
}


int main(){
    /*
        WHY DO WE NEED TO PASS ARRAYS
        - We pass arrays to a function when we need to pass a list of vlaues to a given function.
        - There are two ways to pass arrays as function arguments
            * By declaring array as a parameter in function
            * By declaring a pointer in the function to hold the base address of the array 
        
        NOTE: if we change the value of array, it gets relected in main function
    */

    int arr[] = {1, 2, 5, 4};

    // passing array as arguments
    printf("The value of array before running function at index 0 is %d\n", arr[0]);
    printf("The sum of array is: %d\n", array_sum(arr, 4));
    printf("The value of array after running function at index 0 is %d\n", arr[0]);

    // passing two dimensional array
    int arr_two[2][3] = {{1,2,3}, {4,5,6}};
    printf("Total sum of two dimensional array is: %d\n", array_two_dimensional_sum(arr_two, 2, 3));
    
    
    // passing pointers as arguments
    printf("Largest value in array is: %d\n", max(arr, 4));

    return 0;
}