#include <stdio.h>

/*
    * Rules for switch statement
        - switch expression must be int or char
        - case value must be an integer or cahr
        - case must come inside switch
        - break is not a must
        - if not case were match, default runs

*/

int main(){
    int a = 28;

    switch (a)
    {
    case 5:
        printf("a is 5\n");
        break;
    
    case 10:
        printf("a is 10\n");
        break;
    
    default:
        printf("a is already set\n");
        break;
    }

    // -------------- nested switch --------------
    int x=10, y=15;
    switch (x)
    {
    case 5:
        printf("Your age is not unique\n");
        break;
    
    case 10:
        printf("You age is unique\n");
        switch (y)
        {
        
        case 10:
            printf("Your age is not super unique\n");
            break;
        
        case 15:
            printf("Your age is super unique\n");
            break;
        
        default:
            printf("Not a super unique specify age\n");
        }
        break;
    
    default:
        printf("Not a specify age\n");
    }

    return 0;
}