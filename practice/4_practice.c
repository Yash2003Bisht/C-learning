#include <stdio.h>

void star_pattern(int t, int n){
    if (t==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                printf("*");
            }
            printf("\n");
        }
    } else if(t==1){
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<i+1; j++){
                printf("*");
            }
            printf("\n");
        }
    } else{
        printf("Invalid expression\n");
    }
}

int main(){
    /*
        ------------- STAR PATTERNS -------------
        Take input from the user and ask to choose 0 for triangular star pattern and 1 for reverse triangular star pattern.
        Then print pattern accordingly

        for ex.
        0
        3
        *
        **
        ***
        ---------------------
        1
        5
        *****
        ****
        ***
        **
        *
    */

    int t,n;
    
    printf("Enter 0 for triangular star pattern and 1 for reverse triangular star pattern\n");
    scanf("%d", &t);

    printf("Enter the number of star you want\n");
    scanf("%d", &n);

    star_pattern(t,n);


    return 0;
}