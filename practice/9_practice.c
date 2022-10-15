#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int n){
    srand(time(NULL));
    return rand() % n;
}

int main(){
    int max_play = 5, computer = 0, player = 0, draw = 0;
    char choices[] = {'r', 'p', 's'}, player_choice, computer_choice;

    while (max_play--){
        printf("Enter Your Choice: ");
        scanf("%c", &player_choice);
        getchar();
        computer_choice = choices[randint(3)];

        if (computer_choice == player_choice){
            printf("Computer chose %c\n", computer_choice);
            printf("Draw\n");
            draw++;
        } else{
            if (player_choice == 'r'){
                if (computer_choice == 'p'){
                    computer++;
                } else{
                    player++;
                }
            } else if (player_choice == 'p'){
                if (computer_choice == 's'){
                    computer++;
                } else{
                    player++;
                }
            } else if (player_choice == 's'){
                if (computer_choice == 'r'){
                    computer++;
                } else{
                    player++;
                }
            } else{
                printf("Invalid Input\n");
                max_play++;
                continue;
            }
            printf("Computer chose %c\n", computer_choice);
        }
    }

    printf("\n");

    if (player > computer){
        printf("You Win\n");
    } else if (player < computer){
        printf("Computer Win\n");
    } else{
        printf("Draw\n");
    }

    printf("Computer points: %d \n", computer);
    printf("Your points: %d \n", player);
    printf("Draw: %d \n", draw);
    
    return 0;
}