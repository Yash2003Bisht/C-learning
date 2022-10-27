#include <stdio.h>

int get_num_length(int num){
    int length = 0;
    
    while (num != 0){
        num = num / 10;
        length++;
    }

    return length;
}

int ispalindrome_string(int num){
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

int ispalindrome_integer(int num){
    int temp = num;
    int reverse_num = 0;

    while(temp != 0){
        reverse_num = reverse_num*10 + temp%10;
        temp /= 10;
    }

    if (num == reverse_num)
        return 1;
        
    return 0;
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

    // using string
    if (ispalindrome_string(n))
        printf("%d is a palindrome (using string)\n", n);
    else
        printf("%d is not a palindrome (using string)\n", n);

    // using integer
    if (ispalindrome_integer(n))
        printf("%d is a palindrome (using integer)\n", n);
    else
        printf("%d is not a palindrome (using integer)\n", n);


    return 0;
}