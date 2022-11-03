#include <stdio.h>

int main(){
    /*
        ------------------ WORKING WITH FILES IN C ------------------
        - stdio.h contains a function called fopen() for opening files in C
        - When workiing with files, we have to declare a pointer of type FILE
        - This declaration helps us to work with files through C program.
        - The syntax for opening a file in standard I/O is:
            - file_ptr = fopen("file.txt", "mode");
        - In order to read/write to a file, we can use fscanf/fprintf function.
            - fscanf(file_ptr, "%s", buff);
            - fprintf(file_ptr, "%s", address);
        - fclose(file_ptr); // file_ptr is the file pointer associated with file to be closed.


        ------------------ MODE & DESCRIPTION ------------------
        =====================================================================================
        Mode            |            Description
        =====================================================================================
        r               | Opens a existion file for reading.
        --------------------------------------------------------------------------------------
        w               | Opena a file for writing. If it's doesn't exists, then a new file is
                        | created. Writing starts from the beginning of the file.
        --------------------------------------------------------------------------------------
        a               | Opens a text file for writing for appending mode. If it does not
                        | exits, then a new file created. The program will start appending
                        | content to the existing file content.
        --------------------------------------------------------------------------------------
        r+              | This mode will open a text file for both reading and writing.
        --------------------------------------------------------------------------------------
        w+              | Opens a text file for both reading and writing. If first turncates
                        | the file to zero length if it exists, otherwise created a file if it
                        | does not exist.
        --------------------------------------------------------------------------------------
        a+              | Opens a text file for both reading and writing. It creates the file
                        | if it does not exist. The reading wil start from beginning but
                        | writing can only append to file.
        --------------------------------------------------------------------------------------


        ------------------ OTHER FILE I/O FUNCITONS IN C ------------------
        - There are various functions provided by C standard library to read and write a file, character by character, or in
          the form of fixed length string.
        - Some of them are:
            - fputc
            - fputs
            - fgetc
            - fgets

            * NOTE: c stand for character & s stand for string
        

        ------------------ FPUTC FUNCTION ------------------
        - fputc is the simplest function to write characters to a file.
        - Syntax of fputc goes as follows:
            - int fputc(character, FILE pointer);
            - It returns the written character written on success.
            - On failure it returns EOF(End Of File)
            - The EOF is a constant defined in header file stdio.h 

        ------------------ FPUTS FUNCTION ------------------
        - fputs function is used to write a null terminated string to a file.
        - Syntax
            - int fputs(const char *s, FILE *fp);
        
        ------------------ FGETC FUNCTION ------------------
        - fgetc is the simplest function to read characters from a file.
        - Syntax of fgetc goes as follows:
            - int fgetc(FILE pointer);
            - It returns the read character on success.
            - On failure it returns EOF(End Of File).
            - The EOF is a constant defined in header file stdio.h .

        ------------------ FGETS FUNCTION ------------------
        - fgets function is used to read a null terminated string from a file.
        - Syntax
            - int fgets(cost cahr *s, int n, FILE *fp);
            * int n is the number of character you want to read (always read n+1 characters because
              additonal 1 is for '\0' -> null termination)

    */

    // ==============================================================================
    // NOTE: If you are using a mordern IDE then use ctrl + z to see the file changes
    // ==============================================================================

    // ------------------ CODE EXAMPLE ------------------

    // -------------- READ MODE --------------

    FILE* file_pointer_read = fopen("35_file_io_read.txt", "r");

    // ------- fgetc -------
    // char fget_c = fgetc(file_pointer_read);
    // printf("The fist character in file is: %c\n", fget_c);
    
    // fget_c = fgetc(file_pointer_read);
    // printf("The second character in file is: %c\n", fget_c);

    // ------- fgets -------
    char fget_s[100];
    // fgets(fget_s, 5, file_pointer_read);
    // printf("The first 5 characer in file is: %s\n", fget_s);

    fgets(fget_s, 100, file_pointer_read);
    printf("Full string in file is: %s\n", fget_s);

    fclose(file_pointer_read);

    // -------------- WRITE MODE --------------

    FILE* file_pointer_write = fopen("35_file_io_write.txt", "w");

    // ------- fputc -------
    fputc('A', file_pointer_write);

    // ------- fputs -------
    fputs("\nNamaste", file_pointer_write);

    fclose(file_pointer_write);

    // -------------- APPEND MODE --------------

    FILE* file_pointer_append = fopen("35_file_io_append.txt", "a");

    // ------- fputc -------
    fputc('A', file_pointer_append);

    // ------- fputs -------
    fputs("\nNamaste", file_pointer_append);

    fclose(file_pointer_append);

    // -------------- R+ MODE --------------

    FILE* file_pointer_r_plus = fopen("35_file_io_r_plus.txt", "r+");

    fputs("Namaste ", file_pointer_r_plus);


    fclose(file_pointer_r_plus);


    // -------------- W+ MODE --------------

    FILE* file_pointer_w_plus = fopen("35_file_io_w_plus.txt", "w+");

    fputs("previous content removed ", file_pointer_w_plus);


    fclose(file_pointer_w_plus);


    // -------------- A+ MODE --------------

    FILE* file_pointer_a_plus = fopen("35_file_io_a_plus.txt", "a+");

    fputs("Append on the existing content ", file_pointer_a_plus);


    fclose(file_pointer_a_plus);


    return 0;
}