#include <stdio.h> // preprocessor command
// macro definition
#define LIMIT 5

int main(){ // <- programme execution start from here
    printf("Namaste Duniya\n");  // <- function of a programme
    
    /* Steps to convert a c programme into executable file */
    
    // * 1) preprocessing
    	/* programme comments removed, marco are being expanded and content of
    	   #include files copied in a different file */
    	// marco: Macros are pieces of code in a program that is given some name. 
    	//        Whenever this name is encountered by the compiler, the compiler 
    	//	  replaces the name with the actual piece of code.
    
    for (int i=0; i<LIMIT; i++){
        printf("%d\n", i);
    }
    
    // In the above program, when the compiler executes the word LIMIT, it replaces it 
    // with 5. The word ‘LIMIT’ in the macro definition is called a macro template and 
    // ‘5’ is macro expansion. 
    
    // preprocesse ouput store in a .i file, you can see the content of it.
    
    // * 2) Assembly
    	// * In step two .i file converted into assembly level instruction in a .s 
    	//   file
    
    // * 3) Machine
    	// * Now your assembly instruction converted into machine level 
    	//   instruction(baniary which is understand by cpu) store in .o file you can 
    	//   not open .o file because it is in binary formate.
    	
   // * 4) linker
   	// * This is a final phase, here .o file converted in an executable
   	
   // To see the full file output run gcc -Wall -save-temps file_name.c 
    	
    
    return 0;

    /* C program is made up of keyword, identifier, const, string literals & symbol*/
    // keyword -> c has 32 reverse keyword like int, void, const etc.
    // identifier -> variable, function name, method name etc.
    // const -> variable that cannot be changed.
    // string literals -> just a string like "Hello, World".
    // symbol -> symbols like &x, *pointer(this may not be a correct example) etc.
}

