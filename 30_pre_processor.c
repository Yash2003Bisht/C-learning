#include <stdio.h>

int main(){
    /*
        ------------------ COMPILATION PROCESS ------------------
        - Compiler converts textual form of a C program into executable.
        - There are four phase for a C program to become an executable.
            - PreProcessing
            - Compilation
            - Assembly
            - Linking

            ---------- PreProcessing
            - Removal of comments
            - Expension of macros
            - Expension of include files

            ---------- Compilation
            - Assembly level instruction are generated

            ---------- Assembly
            - .out, .exe executable files are generated
            - function implementation are not resoved yet
            - Assenbly level instruction are convert into machine level instruction
            
            ---------- Linking
            - Resolve function calls
            - Links the function implementations
        
        ------------------ C PREPROCESSOR ------------------
        - C preprocessor comes under action before the actual compilation proces.
        - C preprocessor is not a part of c compiler.
        - It is a text substitution tool.
        - All preprocessor commands begin with a hash symbol(#).
        - for ex.
            * #define -> macro
            * #include -> include header files
            * #undef -> undefine a pre-processor macro
            * #ifdef -> check if a macro is define
            * ifndef -> check if a macro is not define
            * #if -> if any compile time condition is true
            * #else -> alternative of if 
            * elif -> check another condition


    */
    return 0;
}