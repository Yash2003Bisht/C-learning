#include <stdio.h>

int main(){
    int a = 17, b = 17;

    // * if else
    if(a < 18){
        printf("Sorry you can't drive\n");
    } else {
        printf("You can drive\n");
    }

    // * if else if
    if (a>b){
        printf("a is greater than b\n");
    } else if (b>a){
        printf("b is greater than a\n");
    } else{
        printf("both are equal\n");
    }

    int exam_passed = 0;
    printf("Enter the number of exam you passed 2 or 1\n");
    scanf("%d", &exam_passed);

    if (exam_passed == 2){
        printf("Your gift is 45 rupee\n");
    } else if (exam_passed == 1){
        printf("Your gift is 15 rupee\n");
    } else{
        printf("Invalid Input!\n");
    }

    return 0;
}