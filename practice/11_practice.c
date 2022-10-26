#include <stdio.h>

int get_num_length(int num){
    int length = 0;
    
    while (num != 0){
        num = num / 10;
        length++;
    }

    return length;
}

int ispalindrome(int num){
    int size = get_num_length(num);  // get the length of num
    char str_num[size+1];

    // convert integer into char array
    snprintf(str_num, sizeof(str_num), "%d", num);

    // check number is not a palindrome
    for (int i=0; i<size/2; i++){
        if (str_num[i] != str_num[size - i - 1])
            return 0;
    }

    return 1;
}

int main(){

    /*
        ---------------------- PROGRAM TO CHECK IF A NUMBER IS PALINDROME OR NOT ----------------------
        - A palindrome is a word, number, phrase, or other sequence of symbols that reads
          the same backwards as forwards, such as the words madam or racecar
    */

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (ispalindrome(n))
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    return 0;
}