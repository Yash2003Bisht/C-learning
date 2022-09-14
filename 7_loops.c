#include <stdio.h>

int main(){
    /*
     * We have three types of loops in c
        - for
        - while
        - do while
    */

     // ******************* for, while, do while loop syntax + code example *******************

     
     // ======================= for loop =======================
     // for (expression 1; expression 2; expression 3;){
     //     code to run
     // }

     // ======================= while loop =======================
     // while (condition){
     //     code to run
     // }

     // ======================= do while loop =======================
     // do {
     //     code to run
     // } while(condition);



     // ------------- for loop -------------
     for (int i=0; i<10; i++){
          printf("The value of i is %d using for loop\n", i);
     }

     // we can also use two expression in for loop
     int x,y;
     for (x=0, y=0; x<10; x++){
          printf("The value of i and j is %d  %d respectively using for loop\n", x,y);
     }

     // this is not must to initialize expression one in to for loop
     int n=0;
     for (; n<10; n++){
          printf("The value of n is %d using for loop\n", n);
     }

     //   In expression 2
     // - we can add more than two conditional statement. However, the loop will iterate until last condition become false. Other
     //   conditions will be treated as statements
     // - it is optional (Note: it is important to pass a condition because then loop will run infinitely
     //   if you not add break statement)


     //   In expression 3
     // - we can update more than one expression at the same time
     // - expression 3 is optional (Note: it is important to pass a expression 3 because then loop will run infinitely
     //   if you not add break statement)



     printf("\n");

     // ------------- while loop -------------
     int i = 0;
     while (i < 10){
     printf("The value of i is %d using while loop\n", i);
     i++;
     }

     printf("\n");

     // ------------- do while loop -------------
     // Note: do while loop will run atleast once
     i = 0;
     do {
     printf("The value of i is %d using do while loop\n", i);
     i++;
     } while (i<10);

     printf("\n");

          // ------------- break & continue -------------
          
          for (int i=1; ;i++){  // notice here we are not giving the condition so, without break loop will run infinitely
               if (i==11){
                    printf("loop breaked\n");
                    break;
               }
               printf("The value of i is %d\n", i);
          }

          printf("\n");

     int v=0;

     while (v<10){
          v++;
          if (v%2!=0){
               printf("%d is not an even number\n", v);
               continue;
          }
          printf("%d is a even number\n", v);
     }

     


}