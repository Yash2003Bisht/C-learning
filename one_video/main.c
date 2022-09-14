#include <stdio.h>
// this is for string functions
#include <string.h>

// global variable
int global = 900;

// function
void print(char * value){
    printf("%s\n", value);
}

// return type
int sum(int a, int b){
    return a+b;
}

// structures
struct Details{
    char name[50];
    char author[50];
    int price;
} details;

// function for struct
void printStruct(struct Details d){
    printf("Name: %s\n", d.name);
    printf("Author: %s\n", d.author);
    if (d.price <= 0){
        printf("Price: Free\n");
    } else{
        printf("Price: %d\n", d.price);
    }
}

int main(){

    // NOTE: 1byte is equal to 8bit

    // data types
    int integer1 = 0; // 2 to 4 bytes(depend on which architecture you are using)
    unsigned short integer2 = 8; // 2 bytes
    long integer3 = 4567894343434343430; // 4 bytes
    short integer4 = 5678; // 2 bytes
    
    float float1 = 1.2; // 4 bytes: 6 decimal precision
    double float2 = 9.3; // 8 bytes: 15 decimal places precison
    long double float3 = 7.567890; // 10 bytes 19 decimal places precision
    
    char char1 = 'f'; // 1 byte

    // printing data types
    printf("int %d\n", integer1);
    printf("float %f\n", float1);
    printf("double %f\n", float2);
    printf("char %c\n", char1);
    printf("this is unsigned short %d\n", integer2);

    // size taken by datatype
    printf("\nsize taken by int is %zu\n", sizeof(int)); // ignore first \n this is added just to create a gap
    printf("size taken by unsigned int is %zu\n", sizeof(unsigned int));
    printf("size taken by float is %zu\n", sizeof(float));
    printf("size taken by double is %zu\n", sizeof(double));
    printf("size taken by long double is %zu\n", sizeof(long double));
    printf("size taken by char is %zu\n", sizeof(char));
    printf("size taken by unsigned char is %zu\n", sizeof(unsigned  char));
    printf("size taken by short int is %zu\n", sizeof(short int));

    // variable declaration
    int var;
    
    // variable initialization
    var = 9;

    // variable declaraction + initialization
    short int _var = 3;

    // const
    const int i = 9;
    // i += 6; // cannot change const variable value


    // operator in c
    /*
        Arthimetic operators
        Relational operators
        Logical operators
        Bitwise operators
        Assignment operators
        Miscellaneous operators
    */

    // Arthimetic operators
    int a=1,b=2,c=3;
    printf("\nSum: %d\n", a+b+c); // ignore first \n this is added just to create a gap
    printf("Sub: %d\n", a-b-c);
    printf("Mul: %d\n", a*b*c);
    printf("Div: %d\n", a/b/c);
    printf("Increment: %d\n", ++a); // increment first
    printf("Decrement: %d\n", --a); // decrement first

    // Relation operators
    int x=5, y=9;
    printf("\n%d\n", x>y); // ignore first \n this is added just to create a gap
    printf("%d\n", x<y);
    printf("%d\n", x==y);
    printf("%d\n", x!=y);
    printf("%d\n", x>=y);
    printf("%d\n", x<=y);

    // Logical operators
    int h=0,j=1;
    printf("\n%d\n", h&&j); // ignore first \n this is added just to create a gap
    printf("%d\n", h||j);
    printf("%d\n", !h);
    printf("%d\n", !j);

    // Bitwise operators
    int m=6,n=6;  // 110, 110
    printf("\n%d\n", m^n);
    printf("%d\n", m&n);
    printf("%d\n", m|n);
    printf("%d\n", ~n); // change 0 to 1 and 1 into 0
    printf("%d\n", m>>n);
    printf("%d\n", m<<n);

    // Assigment operators
    // =, +=, -=, /=, %=, *= etc
    int t1=4,t2=2;  // = to operator
    t1 += t2;
    printf("\n%d\n", t1);
    t1 /= t2;
    printf("%d\n", t1);
    t1 *= t2;
    printf("%d\n", t1);

    // Miscellaneous operator
    // &, *, ?:
    // & -	Returns the address of a variable.
    // * -	Pointer to a variable.
    // ?: - 	Conditional expression


    // taking user input
    int num;
    // printf("Please Enter the a Value: ");
    // scanf("%d", &num);  // here '&' this means we are given the variable address
    // printf("You enter value: %d\n", num);


    // typecasting
    int d1 = 9;
    printf("\n%d\n", d1);
    float d2 = (float) d1;
    printf("%f\n", d2);

    // dividing two numbers using typecasting
    // int num1, num2;
    // printf("\nEnter Value for nums\n");
    // scanf("%d%d", &num1, &num2);
    // printf("The num1/num2 is: %f\n", (float)num1/num2);


    // if else
    int t = 2;
    if (t%2 == 0){
        printf("\neven\n");
    } else if (t%3 == 0 && t%5 == 0){
        printf("\nnice\n");
    }else{
        printf("\nodd\n");
    }

    // shorthand
    int shorthand = t>1?1:0;
    printf("%d\n", shorthand);

    printf("\n");
    

    // switch case
    int o = 10;
    switch (o)
    {
    case 0:
        printf("value is specify 0\n");
        break;

    case 5:
        printf("value is specify 5\n");
        break;
    
    case 10:
        printf("value is specify 10\n");
        break;
    
    default:
        printf("Not a specify value\n");
        break;
    }

    printf("\n");

    // loops

    // * while looop
    int index = 0;
    while (index < 5){
        printf("index value is %d\n", index);
        index++;
    }

    printf("\n");

    // * for loop
    for (int c=0; c<5; c++){
        printf("index value is %d\n", c);
    }

    printf("\n");

    // * do while loop
    // Note: do while loop atleast run one time
    int index1 = 0;
    do{
        printf("index value is %d\n", index1);
        index1++;
    }while (index1 < 5);

    printf("\n");

    // calling function
    print("hello");

    // return funciotn value
    int result = sum(5,9);
    printf("%d\n", result);
    // or
    printf("%d\n", sum(4,6));


    // local and global variable
    // local variable
    int local = 500;

    // check on the top for global variable

    printf("\n");

    // array
    // int arr1[] = {1,2,3,4,5,6,7,8,9,0,11};
    // // or
    // int arr2[10] = {1,2,3,4,5,6,7,8,9,0};

    // printf("%d\n", arr1[6]);
    // printf("%d\n", arr2[8]);

    // char arr[5];
    // for (int ki = 0; ki < 5; ki++){
    //     printf("Enter value for index %d\n", ki);
    //     scanf("%c", &arr[ki]);
    // }
    
    // for (int ki = 0; ki < 5; ki++){
    //     printf("%c\n", arr[ki]);
    // }


    printf("\n");

    // pointers
    int variable = 55;
    int* pointer = NULL; // its a good practice to define a pointer null before using it

    pointer = &variable;

    printf("%ls\n", pointer);  // memory address were the variable is stored

    // before changing pointer
    printf("%d\n", variable);

    // after changing pointer
    *pointer = 255;
    printf("%d\n", variable);

    
    print("\n");


    // string
    char name[5] = {'j', 'o', 'h', 'n', '\0'}; // last character should be null character in string
    printf("%s\n", name);

    char str1[20], str2[30], str3[40];

    // strcpy: copy one string from another
    strcpy(str1, name);
    // or
    strcpy(str1, "hello");
    printf("%s\n", str1);

    // strcat: append a string in last of the string
    strcat(str1, name);
    printf("%s\n", str1);

    /*
    strcmp:
        - return 0 if string1 and string2 is same(alphabetically)
        - return less than zero if string1 is less than string2(alphabetically)
        - return greater than 0 if string1 is greater than string2(alphabetically)
    */ 
    char str4[50];

    // strcpy(str3, "hello");
    // strcpy(str4, "hello");
    
    // strcpy(str3, "Hello");
    // strcpy(str4, "hello");

    
    strcpy(str3, "hello");
    strcpy(str4, "aello");

    printf("%d\n", strcmp(str3, str4));

    printf("\n");


    // structures
    struct Details d;
    strcpy(d.name, "Python Programming");
    strcpy(d.author, "Guido van Rossum");
    d.price = 1;

    printStruct(d);

    

}

