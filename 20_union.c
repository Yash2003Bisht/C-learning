#include <stdio.h>
#include <string.h>

// ------------- UNION -------------
union Theater{
    char housefull[10];
    char ticket[10];

};

int main(){

    /*
        ------------- WHAT IS A UNION? -------------
        - Union is a user define data type(very similar to structures).
        - The difference between structures and unions lies in the fact that is structure, each member has its own storage
          location, whereas members of a union uses a single shared memory location.
        - This single shared memory location is required is equal to the size of its largest data member.
        - We use unions for better memory management in our C programs.

        ------------- DECLARING AND ACCESSING UNION MEMBERS -------------
        Like structures, we access any member by using the member access operator(.) unions.
        We use keyword union to define a union.
        Syntax is very simillar to that structure.

        ------------- UNION CANNOT HANDLE ALL MEMBERS AT ONCE -------------
        ****** structures ******  |  ****** union ******
                                  | 
        struct student{           |  union student {
            int id;               |      int id;
            int marks             |      int marks;
        } student;                |  } student;
                                  | 
        struct student take 8     |  union student take 4 bytes of memory
        bytes of memory           | 

        ------------- SYNTAX -------------
        union data{
            char details[1000];
        } john_data;

        john_data.details = {'A', '\0'};

    */

    // ------------- CODE EXAMPLE -------------
    union Theater th;
    strcpy(th.ticket, "True");
    printf("Value of ticket is %s\n", th.ticket);
    printf("Value of housefull is %s\n", th.housefull);

    printf("\n");

    strcpy(th.housefull, "True");
    printf("Value of ticket is %s\n", th.ticket);
    printf("Value of housefull is %s\n", th.housefull);

    return 0;
}