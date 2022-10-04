#include <stdio.h>
#include <string.h>

// -------------- IMPLEMENTING STRUCTURE --------------
struct data1{
    char name[100];
    char address[100];
    int age;
    long number;
};


// -------------- IMPLEMENTING + INITIALIZING STRUCTURE --------------
struct data2{
    char name[100];
    char address[100];
    int age;
    long number;
} john, will, rock;


int main(){
    /*
        -------------- WHAT IS A STRUCTURE IN C--------------
        - Structure are user defined data types in C
        - Using structure allows us to combine data of different type together
        - it is used to create complex data type which contains diverse infomation
        - They are very similar to arrays but structure can store data of any type, which is practically more useful.
        - In simple words, using structure we can make your own data types in C.

        -------------- ACCESSING STRUCTURE MEMBERS --------------
        - Array elements are accessed using the subscript variables.
        - In a similar fashion, strucutre members are accessed using dot[.] operator.
        - (.) is called as "structure member operator".
        - To access the member of the structure, we use this operator in between "structure name" and "member name".

        -------------- SYNTAX --------------
        struct [structure_name]{
            // data_type var 1
            // data_type var 2
            // data_type var 3
            // data_type var 4
        }
        [structure_variables];
    */

    // -------------- IMPLEMENTING --------------
    struct data1 chris, ruffalo, mark;
    
    strcpy(chris.name, "chris");
    strcpy(chris.address, "NYC");
    chris.age = 39;
    chris.number = 1234567890;

    strcpy(ruffalo.name, "ruffalo");
    strcpy(ruffalo.address, "NYC");
    ruffalo.age = 42;
    ruffalo.number = 9876543210;

    strcpy(mark.name, "mark");
    strcpy(mark.address, "NYC");
    mark.age = 44;
    mark.number = 6543217890;

    printf("Name: %s\n", chris.name);
    printf("Address: %s\n", chris.address);
    printf("age: %d\n", chris.age);
    printf("age: %ld\n", chris.number);
    printf("\n");

    printf("Name: %s\n", ruffalo.name);
    printf("Address: %s\n", ruffalo.address);
    printf("age: %d\n", ruffalo.age);
    printf("number: %ld\n", ruffalo.number);
    printf("\n");

    
    printf("Name: %s\n", mark.name);
    printf("Address: %s\n", mark.address);
    printf("age: %d\n", mark.age);
    printf("number: %ld\n", mark.number);
    printf("\n");


    // -------------- IMPLEMENTING + INITIALIZING --------------
    strcpy(john.name, "john");
    strcpy(john.address, "NYC");
    john.age = 39;
    john.number = 1234567890;

    strcpy(will.name, "will");
    strcpy(will.address, "NYC");
    will.age = 42;
    will.number = 9876543210;

    strcpy(rock.name, "rock");
    strcpy(rock.address, "NYC");
    rock.age = 44;
    rock.number = 6543217890;

    printf("Name: %s\n", john.name);
    printf("Address: %s\n", john.address);
    printf("age: %d\n", john.age);
    printf("age: %ld\n", john.number);
    printf("\n");

    printf("Name: %s\n", will.name);
    printf("Address: %s\n", will.address);
    printf("age: %d\n", will.age);
    printf("number: %ld\n", will.number);
    printf("\n");

    
    printf("Name: %s\n", rock.name);
    printf("Address: %s\n", rock.address);
    printf("age: %d\n", rock.age);
    printf("number: %ld\n", rock.number);
    printf("\n");    

    return 0;
}