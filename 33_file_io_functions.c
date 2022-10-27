#include <stdio.h>

int main(){
    /*
        ---------------- WORKING WITH FILES IN C ----------------
        - When working files, we have to declare a pointer type FILE.
        - for ex. File* pointer = NULL;
        - This decalaration is help us to work with files through C program.

        ---------------- OPENNING A FILE - CREATING OR EDITING A FILE ----------------
        - stdio.h contains a function called fopen() for opening files in C.
        - The syntax for opening a file in standard I/O is:
            ptr = fopen("file_name", "mode");
        - for ex.
            ptr1 = fopen("hello.txt", "r") // openning a file in reading mode
            ptr2 = fopen("hello.txt", "w") // openning a file in writing mode
            ptr3 = fopen("hello.txt", "a") // openning a file in appeding mode

        ---------------- MODES TO OPEN A FILE IN C ----------------
        - r -> open a file in read mode
        - w -> opens or create a text file in write mode
        - a -> opens a file in append mode
        - r+ -> opens a file in both read and write mode
        - a+ -> opens a file in both read and write mode
        - w+ -> opens a file in both read and write mode

        ---------------- CLOSING A FILE ----------------
        - Any file which is open in C program needs to be closed.
        - Closing a file is accomplished by the library function fclose().
        - fclose(ptr); // fptr is a file pointer associated with file to be closed.

        ---------------- READING A FILE ----------------
        - In order to read a file, we can use fscanf function.
        - This function is file version of scanf function.
        - fscanf expects a file pointer in addition to the other arguments which scanf expects.
        - We will have to open the file in read mode in order to use this function.
        - for ex. fscanf(ptr, "%s", string);

        ---------------- WRITING TO A FILE ----------------
        - In order to write to a file, we can use fprintf function.
        - This function is file version of pirntf function.
        - fprintf expects a file pointer in addition to the other arguments which printf expects.
        - We will habe to open the file in write mode in order to use this function.
        - for ex. fprintf(ptr, "%s", string);

    */

    
    // ---------------- CODE EXAMPLE ----------------
    FILE* file = NULL;
    char string[1001];

    // -------- reading a file --------
    file = fopen("33_file_io.txt", "r");
    // fscanf(file, "%s", string);  // %s specifier will only read to a space
    fscanf(file, "%[^\n]%*c", string);  // %[^\n]%*c specifier will read a line
    fclose(file);

    printf("%s\n", string);

    // -------- writing a file --------
    char write_string[] = "previous data will be erased";
    file = fopen("33_file_io.txt", "w");
    fprintf(file, "%s", write_string);

    // -------- append a file --------
    char append_string[] = "previous data will not be erased\n";
    file = fopen("33_file_io.txt", "a");
    fprintf(file, "%s", append_string);

    return 0;
}