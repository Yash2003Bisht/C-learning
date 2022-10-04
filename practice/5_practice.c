#include <stdio.h>

void reverse_arr(int arr[], int size){
    for (int i=0; i<size/2; i++){
        int a = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = a;
    }
}

int main(){
    /*
        Array Reversal
    */

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(int);

    printf("Array before reverse: ");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    reverse_arr(arr, size);
    
    printf("Array after reverse: ");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}