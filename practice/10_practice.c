#include <stdio.h>
#include <stdlib.h>


void get_matrix_input(int** arr, int row, int column){
    for (int i=0; i<row; i++){
        printf("\n");
        printf("Enter the values for %d row\n", i+1);
        for (int j=0; j<column; j++){
            printf("Enter the value of %d column: ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}


void allocate_column_memory(int** arr, int row, int column){
    for (int i=0; i<row; i++){
        arr[i] = (int *) calloc(column, sizeof(int));
    }

}


int main(){
    /* --------------- MATRIX MULTIPLICATION --------------- */

    int** a, ** b, ** c, ra, rb, ca, cb;

    printf("Enter the number of row for matrix a: ");
    scanf("%d", &ra);
    
    printf("Enter the number of column for matrix a: ");
    scanf("%d", &ca);

    
    printf("Enter the number of row for matrix b: ");
    scanf("%d", &rb);
    
    printf("Enter the number of column for matrix b: ");
    scanf("%d", &cb);

    if (ca == rb){

        // ----------------- for matrix a -----------------
        a = (int **) malloc(ra * sizeof(int));
        allocate_column_memory(a, ra, ca);
        printf("\nEnter Values for Matrix A\n");
        get_matrix_input(a, ra, ca);

        // ----------------- for matrix b -----------------
        b = (int **) malloc(rb * sizeof(int));
        allocate_column_memory(b, rb, cb);
        printf("\nEnter Values for Matrix B\n");
        get_matrix_input(b, rb, cb);

        // ----------------- for matrix c -> result matrix -----------------
        c = (int **) calloc(rb, sizeof(int));
        allocate_column_memory(c, ra, cb);

        // ----------------- matrix calculation start -----------------
        for (int i=0; i<ra; i++){
            for (int j=0; j<cb; j++){
                for (int k=0; k<ca; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        
        // ----------------- print the result -----------------
        printf("\nMatrix C (result)\n");
        for (int i=0; i<ra; i++){
            for (int j=0; j<cb; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        
    } else{
        printf("Invalid\n");
    }




    return 0;
}
