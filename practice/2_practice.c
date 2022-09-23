#include <stdio.h>

int main(){

    /* ############### UNIT CONVERSION ###############
    -> km to miles 
    -> inches to foot 
    -> cm to inches 
    -> inches to meters     
    */
    
    while (1){
        int a,b;
        printf("1) kms to miles\n");
        printf("2) inches to foot\n");
        printf("3) cms to inches\n");
        printf("4) inches to meters\n");
        printf("5) press 0 to quit\n");
        printf("Enter Your Choice: ");

        scanf("%d", &a);

        // break the loop
        if (a==0){
            printf("Thanks for using\n");
            break;
        } else if (a<1 || a>4){  // -> invalid input for a
            printf("\nInvalid Input\n\n");
            continue;
        }

        // take user input
        printf("\nEnter value: ");
        scanf("%d", &b);

        if (a==1){
            printf("%d kms to miles is: %f\n\n", b, b/1.609);
        } else if(a==2){
            printf("%d inches to foot is: %f\n\n", b, b/12.0);
        } else if (a==3){
            printf("%d cms to inches is: %f\n\n", b, b/2.54);
        } else{
            printf("%d inches to meters is: %f\n\n", b, b/39.37);
        }
    }
    return 0;
}