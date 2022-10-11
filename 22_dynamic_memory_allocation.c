#include <stdio.h>

int main(){
    /*
      --------------- WHAT & WHY DYNAMIC MEMORY ALLOCATION? ---------------
      - An statically allocated variable on array has a fixed size in memory.
      - We have learnt to create a big enough arrays to fit in our inputs but this doesn;t seem like an optimal way
        to allocated memory.
      - Memory is a very useful resource.
      - Clearly we need a way to request memory on runtime.
      - Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.

      --------------- STATIC VS DYNAMIC MEMORY ALLOCATION ---------------
      Static Memory Allocation            |    Dynamic Memory Allocation
      - Allocation is done before the     |    - Allocation is done during the
        program's execution               |      program's execution
                                          |    
      - There is no memory reusabilty     |    - There is memory reusability and
        and the memory allocated cannot   |      and the allocated memory can be
        be freed.                         |      freed when not required
                                          |    
      - Less efficient                    |    - More efficient

      --------------- MEMORY ALLOCATION IN C PROGRAMS ---------------
      - Memory assigned to a program in a typical architecture can be broken down into four segments:
      1) Code or Text Segment
      code segment, also known as a text segment or simply as text, is a portion of an object file or the corresponding
      section of the program's virtual address space that contains executable instructions.
      
      2) Static/Global Variables Segment
        - Data Segment -> initialized segment
        - bss(block starting symbol ) -> uninitialized segment

      3) Stack
      Stack is a linear data structure which follows a particular order in which the operations are performed.
      The order may be LIFO(Last In First Out) or FILO(First In Last Out).

      4) Heap
      A Heap is a special Tree-based data structure in which the tree is a complete binary tree.

      --------------- C PROGRAM: STACK OVERFLOW ---------------
      - Compiler allocates some space for the stack part of the memory.
      - When this space gets exhausted because of some bugs, the situation is called as stack overflow.
      - Typical examples includes recursion with wrong/no base condition.

      --------------- C PROGRAM: USE OF HEAP ---------------
      - There are a lot of limitations of stack (static memory allocation).
      - Some of the examples include variable sized arrays, freeing memory no longer required etc.
      - Heap can be used flexibly by the programmer as per his needs. But if there were a bug in program heap will start
        grow and never stop.
      - We can create a pointer in our main function and point to memory block in the heap.
      - The address is stored by the local variable in the main function.
      - The memory consumed will not get freed automatically in case we overwrite the pointer.


    */
    return 0;
}