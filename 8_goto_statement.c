#include <stdio.h>

int main(){
    /* * GOTO STATEMENT
        - Also called jump statement in c.
        - used to transfer program control to a predefine label.
        - its use is avoided since it causes confusion to the fellow programmers in understanding the code.
        - Goto statement is preferable when we need to break multiple loops using a single statement at the same time.

        ---------------------------- GOTO STATEMENT SYNTAX ----------------------------
        label:
            printf("duniya\n");
            goto end;
        
        printf("namaste "); ------> this line will skipped
        goto label;

        end:
            printf("goto ended\n");

        --------------------------------------------
        OUTPUT:
        duniya
        goto ended


    
    */

    label:
        printf("duniya\n");
        goto end;
        
    printf("namaste \n");
    goto label;

    end:
        printf("goto ended\n");

    // ----------------- GOTO IN NESTED LOOPS -----------------
    int n;

    for (int i=0; i<10; i++){
        printf("Its running for %d\n", i);
        for (int j=0; j<10; j++){
            printf("Enter a number\n");
            scanf("%d", &n);
            // if (n==0){   ------
            //     break;         |  ===== > this will only break the current loop 
            // }            ------

            if (n==0){
                goto exit;
            }

        }
    }

    exit:
        printf("exited\n");
    // or
    // printf("exited\n");
    

    return 0;
}