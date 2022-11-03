#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ----------- GLOBAL VARIABLE -----------
int cash = 500;

void play(int bet_amount){
    int position, i;
    // char c[3] = {'j', 'k', 'q'};

    char* c = (char*) malloc(534576*sizeof(char));  // ----
    c[0] = 'j';                                     //     | this will cause a
    c[1] = 'k';                                     //     | Memory leak
    c[2] = 'q';                                     // ----

    srand(time(NULL));
    for (i=0; i<10; i++){
        int a = rand() % 3;
        int b = rand() % 3;

        char temp = c[a];
        c[a] = c[b];
        c[b] = temp;
    
    }
    
    printf("You have three options(1, 2, 3)\n");
    printf("What's the position of queen? \n");
    scanf("%d", &position);

    if (c[position-1] == 'q'){
        cash += 3*bet_amount;
        printf("You guess it right\n");
    } else{
        cash -= bet_amount;
        printf("You lose\n");
    }
    printf("Total cash: %d\n", cash);

    // use free function to avoid memory leak
    // free(c);

}

int main(){
    /*
        --------------------- WHAT IS MEMORY LEAK IN C ---------------------
        - Dynamic Memory Allocation is a way in which the size of a data structure
          can be changed during the runtime.
        - Memory assigned to a program in a typical architecture can be broken down into
          four segments:
          1. Code
          2. Static/Global variables
          3. Stack
          4. Heap
        - Memory leak is improper use of dynamic memory or the heap section of memory that causes the
          memory consumption of our program to increase over period of time.

        --------------------- WHAT CAUSES MEMORY LEAK IN C ---------------------
        - Memory leak is caused when we don't use dynamic memory properly
        - Memory leak always happens because of unsed and unrefrenced memory blocks in the heap.
        - When we keep on allocating memory in the heap without freeing, the overall memory usage
          keeps on increasing.
        - This situation is the cause of memory leak the programmer creates a memroy block in the
          memory and forgets to delete it.
        - To avoid these memory leaks situations, memory allocated on heap should always be freed
          when not needed.


    */

    // --------------------- CODE EXAMPLE ---------------------
    int bet_amount, count=0;
    printf("\nYou have %d cash\n", cash);
    
    while(cash > 0){
        printf("\nEnter Your Bet Amount: ");
        scanf("%d", &bet_amount);

        if (bet_amount <= 0 || bet_amount > cash)
            break;
        else
            play(bet_amount);

        printf("Total bet made %d\n", count);

        count++;
    }


    return 0;
}