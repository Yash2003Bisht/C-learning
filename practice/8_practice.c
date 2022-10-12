#include <stdio.h>
#include <stdlib.h>

int main(){
    /*

    ---------------- Dynamic Memory Allocation ----------------
        ABC Pvt Ltd. manages employee records of other companies.
        Employee Id can be of any length and it can contain any character
        For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
        Then, you have to take employee id as an input and display it on screen. 
        Store the employee id in a character array which is allocated dynamically.
        You have to create only one character array dynamically
        
        EXAMPLE:
        Employee 1:
        Enter no of characters in your eId
        45
        Dynamically allocate the character array.
        take input from user 

        Employee 2:
        Enter no of characters in your eId
        4
        Dynamically allocate the character array.
        take input from user 

        Employee 3:
        Enter no of characters in your eId
        9
        Dynamically allocate the character array.
        take input from user 

    */

    int length, n;
    char* id;

    printf("Enter the total number of employee: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        printf("Enter Employee %d ID length: ", i+1);
        scanf("%d", &length);

        // allocate memory dynamically
        id = (char *) malloc(length * sizeof(char));
        
        printf("Enter Employee %d ID: ", i+1);
        scanf("%s", id);

        printf("Employee %d ID is %s\n", i+1, id);
    }
    return 0;
}