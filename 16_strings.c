 #include <stdio.h>

 /* Function to print String */
 void print_string(char str[]){
    int i=0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;;
    }
    printf("\n");
 }

 int main(){
    /*
        -------------- IS STRING A DATATYPE IN C? --------------
        * No
        * We hvae char, float, double and other data types but no 'string' data type in c
        * String is not a supported data type in C but it is very useful concept used to model
          real world enities like name, city, address etc.
        * We express strings using an array of characters terminated by a null character ('\0')

        -------------- WHAT ARE STRINGS IN C --------------
        * String: array of characters terminated by null character in c
        * Strings in C is created by creating an array of characters
        * We need an extra character ('\0' or null character) to tell the compiler that the string ends here.
        
        -------------- SYNTAX OF CREATING AN STRING ARRAY --------------
        char name[] = "john cena";  -> '\0'(null character) is not required if we user double coats
        char name[] = {'j','o','h','n',' ','c','e','n','a','\0'};

    */

    
    // -------------- CODE EXAMPLE --------------
    char name1[] = "mark ruffalo";
    char name2[] = {'m','a','r','k',' ','r','u','f','f','a','l','o','\0'};
    char name3[] = {'m','a','r','k',' ','r','u','f','f','a','l','o'};  // not a valid string in C

    
    // -------------- PRINT STRING USING CUSTOM FUNCTION --------------
    print_string(name1);
    print_string(name2);

    printf("This is not valid string: ");
    print_string(name3);

        
    // -------------- PRINT STRING USING PUTS FUNCTION --------------
    puts(name1);
    puts(name2);

    printf("This is not valid string: ");
    puts(name3);
 

    // -------------- TAKING STRING INPUT USING SCANF --------------
    /*
        In order to take a line as input, you can use scanf("%[^\n]%*c", s);
        where s is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s.
        Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
        Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
    */
    char input_str1[100];
    printf("Enter a string - using scanf(max size of string is 100 characters): ");
    scanf("%[^\n]%*c", &input_str1);
    print_string(input_str1);
    // or
    // puts(input_str1);


    // -------------- TAKING STRING INPUT USING GETS --------------
    char input_str2[100];
    printf("Enter a string - gets(max size of string is 100 characters): ");
    gets(input_str2);
    puts(input_str2);
    // or
    // print_string(input_str2);


    return 0;
 }