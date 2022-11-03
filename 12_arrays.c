#include <stdio.h>


int sum(int arr[], int n){
    /* 
        function to calculate sum of an array  
    */
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
    }
    return total;
}


int avg(int arr[], int n){
    /*
        function to calculate average of an array
    */
    int total = sum(arr, n);
    return (float) total/n;
}


int min(int arr[], int n){
    /*
        function to find minimume element in an array
    */
    int _min = arr[0];
    for (int i=1; i<n; i++){
        if (_min>arr[i]){
            _min = arr[i];
        }
    }
    return _min;
}


int max(int arr[], int n){
    /*
        function to find maximume element in an array
    */
    int _max = arr[0];
    for (int i=1; i<n; i++){
        if (_max<arr[i]){
            _max = arr[i];
        }
    }
    return _max;
}

int main(){
    /*  Arrays
        - A arrya is a collection of data items of the same type.
        - Items are stored at contiguous memory locations.
        - It can also store the collection of derived data types, such as pointer, structures, etc.
        - Some texts refer to to one-dimensional arrays as vectors, two dimensional arrays as matrices,
          and use the general term array when the number of dimensional unspecfied or unimportant.
    */

    // --------------- SYNTAX OF ARRAYS ---------------
    /*
        * initialization
        - data_type array_name[size];

        * initialization + declaration
        - data_type array_name[size] = {1, 2, 3, 4};

        * for ex.
            int arr[10]; --> initialization
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; --> initialization + declaration
    */

    int data[10]; // -- > initialization
    // or 
    // int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // -- > initialization + declaration, while initialization and declaration
                                                    //      at the same time no need to add a size


    // --------------------- Adding items to array --------------------- 
    for (int i=1; i<=10; i++){
        data[i-1] = i;
    }


    // ---------------------  Printing elements of array --------------------- 
    for (int i=0; i<10; i++){
        printf("%d ", data[i]);
    }
    printf("\n");

    
    // ---------------------  Creating array from user input --------------------- 
    int s;
    printf("Enter the size of array: ");
    scanf("%d", &s);
    
    int array[s];

    for (int i=0; i<s; i++){
        printf("Enter %d value of array: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i=0; i<s; i++)
        printf("The %d element of the array is: %d\n", i+1, array[i]);

    
    printf("\n");

    printf("Total sum of array is: %d\n", sum(array, s));
    printf("Avg of array is: %d\n", avg(array, s));
    printf("Maximume element in the array is: %d\n", max(array, s));
    printf("Minimume element in the array is: %d\n", min(array, s));
    

    // --------------------- 2D Array --------------------- 
    
    int array_2d[2][3]; // --> initialization
    // or 
    // int array_2d[][3] = {{1,2,3}, {4,5,6}}; // --> initialization + declaration

    printf("\n");

    // --------------------- Creating 2D Array from user input ---------------------

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int user_2d_array[rows][columns];

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("Enter the %d row. column %d value: ", i+1, j+1);
            scanf("%d", &user_2d_array[i][j]);
        }
    }

    printf("\n");
    
    for(int i=0; i<rows; i++){
        printf("%d row sum: %d\n", i+1, sum(user_2d_array[i], columns));
        printf("%d row avg: %d\n", i+1, avg(user_2d_array[i], columns));
        printf("%d row min: %d\n", i+1, min(user_2d_array[i], columns));
        printf("%d row max: %d\n", i+1, max(user_2d_array[i], columns));
        printf("\n");
    }





    return 0;
}