#include <stdio.h>

int main(int argc, char const *argv[]){  // These parameter is added to pass a commad line argument.
                                        // argc -> count: total number of arguments passed.
                                        // argv -> value: array pointer contaning all values passed.
    /*
        --------------------- WHAT ARE COMMAND LINE ARGUMENTS? ---------------------
        - Command line arguments is an important concept in C programing.
        - Sometimes we need to pass arguments from the command line to the programs a set of inputs.
        - Command line arguments are used to supply parameters to the program when it is invoked.
        - It is mostly used when you need to control your program from the console.
        - These arguments pass to the main() method.

        --------------------- COMMAND LINE ARGUMENTS ---------------------
        - FFmpeg is a free and open-source project consisting of a vast software suite of libraries and programs for handling
          video, audio, and other multimedia files and streams.
        - FFmpeg.exe is a command line utility written in C.
        - Other examples include git, brew, apt-get etc.

    */

    // --------------------- CODE EXAMPLE ---------------------

    // ---------- print number of argument pass ----------
    printf("Number of argument passed is: %d\n", argc); // If no argument is given, it will print 1,
                                                        // as the first argument to this is the file name itself.

    for (int i=0; i<argc; i++){
        printf("The argument at index %d is %s\n", i, argv[i]);
    }

    // ---------- command line utility to add two number ----------
    int a, b;
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    
    printf("%d\n", a+b);


    return 0;
}