#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// #include <math.h>

void rectangle_perimeter()
{
    int l, w;

    printf("Enter length: ");
    scanf("%d", &l);

    printf("Enter width: ");
    scanf("%d", &w);

    printf("Ans: %d\n", 2 * (l + w));
}

void cube()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The cube of %d is %d\n", n, n * n * n);
}

void avg()
{
    int x, y, z;

    printf("Enter three number: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("The average of %d, %d and %d is: %d\n", x, y, z, (x + y + z) / 3);
}

void is_digit()
{
    char n;

    printf("Enter a number: ");
    scanf("%c", &n);

    if (n >= 48 && n <= 57)
        printf("%c is a digit\n", n);
    else
        printf("%c is not a digit\n", n);
}

void min()
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("%d is smallest b/w %d and %d\n", y, x, y);
    }
    else if (y > x)
    {
        printf("%d is smallest b/w %d and %d\n", x, x, y);
    }
    else
    {
        printf("Both are equal\n");
    }
}

void is_armstrong()
{
    /*
        An Armstrong number of three digits is an integer such that the sum
        of the cubes of its digits is equal to the number itself. For example,
        371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
    */
    int num, total, temp, mod;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    total = 0;

    while (temp != 0)
    {
        mod = temp % 10;
        total += mod * mod * mod;
        temp /= 10;
    }

    if (total == num)
        printf("%d is a armstrong number\n", num);
    else
        printf("%d is not a armstrong number\n", num);
}

void is_natural_number()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d is a natural number\n", n);
    else
        printf("%d is not a natural number\n", n);
}

void print_pattern()
{
    /*
     *****  -----
     *****       | we have to print this pattern
     *****       | using nested loops
     *****  -----
     */

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void is_prime(int n)
{
    int flag = 0;

    if (n <= 1)
    {
        flag = 1;
        printf("%d is not a prime number\n", n);
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                printf("%d is not a prime number\n", n);
                break;
            }
        }
    }

    if (!flag)
        printf("%d is a prime number\n", n);
}

void print_prime_range()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        is_prime(i);
    }
}

int digit_sum()
{
    int n, total = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        total += temp % 10;
        temp /= 10;
    }

    printf("%d digit sum is %d\n", n, total);
}

// void find_sqrt(){
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("sqrt of %d is %.2f\n", n, sqrt(n));

// }

void hot_cold()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 25)
        printf("COLD\n");
    else
        printf("HOT\n");
}

void own_pow()
{
    int x, y, pow_total, temp;

    printf("Enter first a number: ");
    scanf("%d", &x);

    printf("Enter second a number: ");
    scanf("%d", &y);

    temp = x;

    for (int i = 0; i < y - 1; i++)
    {
        pow_total = temp * x;
        temp = pow_total;
    }

    printf("%d power of %d is %d\n", x, y, pow_total);
}

void max_using_pointer(int *x, int *y)
{
    int a = *x;
    int b = *y;

    if (a > b)
    {
        printf("Max is %d\n", a);
    }
    else if (b > a)
    {
        printf("Max is %d\n", b);
    }
    else
    {
        printf("Both are equal\n");
        ;
    }
}

void arr_reverse()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_alphabets(char *alphabets_pointer)
{
    for (int i = 0; alphabets_pointer[i] != '\0'; i++)
    {
        printf("%c ", alphabets_pointer[i]);
    }
    printf("\n");
}

void x_occurrence()
{
    int x = 5, count = 0;
    int arr[] = {1, 2, 4, 5, 1, 5, 6, 9, 9, 32, 2, 3, 5, 5, 6, 75};

    for (int i = 0; i < 16; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("%d occur %d times\n", x, count);
}

void largest_number()
{
    int arr[] = {1, 2, 4, 5, 1, 5, 6, 9, 9, 32, 2, 3, 5, 5, 6, 75};
    int largest = 0;

    for (int i = 0; i < 16; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("largest element in the array is %d\n", largest);
}

void insert_end()
{
    int x, arr[] = {1, 2, 4, 5, 1, 5, 6, 9, 9, 32, 2, 3, 5, 5, 6, 75}, *arr_pointer;
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Enter a number you want to insert: ");
    scanf("%d", &x);

    // reallocate the size
    arr_pointer = (int *)realloc(arr_pointer, (length + 1) * sizeof(int));

    // copy the array to new arr_pointer
    for (int i = 0; i < length; i++)
    {
        arr_pointer[i] = arr[i];
    }

    arr_pointer[length] = x;

    // print the array
    for (int i = 0; i < length + 1; i++)
    {
        printf("%d ", arr_pointer[i]);
    }
    printf("\n");

    free(arr_pointer);
}

void upper_case_vowels()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++)
    {
        printf("vowel %c in uppercase is represented as %c\n", vowels[i], toupper(vowels[i]));
    }
}

void highest_frequency_string()
{
    char string[] = "This is a string";
    int i = 0, j = 0, count = 0;
    char longest_char[100];

    for (; string[i] != '\0'; i++)
    {
        int temp_count = 0;
        while (string[j] != ' ' && string[j] != '\0')
        {
            temp_count++;
            j++;
        }

        if (temp_count > count)
        {
            count = temp_count;
            temp_count = 0;
            for (int k = i; k < j; k++)
            {
                longest_char[temp_count] = string[k];
                temp_count++;
            }
            longest_char[temp_count] = '\0';
        }

        i = j;
        j++;
    }

    printf("The highest character on the string is %s\n", longest_char);
}

void remove_blank_spaces()
{
    char string[] = "This is a string", new_string[100];
    int j = 0, i = 0;

    for (; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            new_string[j] = string[i];
            j++;
        }
    }

    printf("before: %s\n", string);
    printf("after: %s\n", new_string);
}

void lower_upper()
{
    char string[] = "lower case string UPPER CASE STRING";
    char new_string[100];
    int i = 0, j = 0;

    for (; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            new_string[j] = toupper(string[i]);
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            new_string[j] = tolower(string[i]);
        }
        else
        {
            new_string[j] = string[i];
        }
        j++;
    }

    printf("before: %s\n", string);
    printf("after: %s\n", new_string);
}

int main()
{
    // ---------------- CHAPTER NO. 1 ----------------

    // -------- soltuion 1 --------
    // rectangle_perimeter();

    // -------- soltuion 2 --------
    // cube();

    // -------- soltuion 3 --------
    // here is a comment for a & b.

    // ---------------- CHAPTER NO. 2 ----------------

    // -------- soltuion 1 --------
    // avg();

    // -------- soltuion 2 --------
    // is_digit();

    // -------- soltuion 3 --------
    // min();

    // ---------------- CHAPTER NO. 3 ----------------

    // -------- soltuion 1 --------
    // is_armstrong();

    // -------- soltuion 2 --------
    // is_natural_number();

    // ---------------- CHAPTER NO. 4 ----------------

    // -------- soltuion 1 --------
    // print_pattern();

    // -------- soltuion 2 --------
    // int n;

    // printf("Enter a number: ");
    // scanf("%d", &n);

    // is_prime(n);

    // -------- soltuion 3 --------
    // print_prime_range();

    // ---------------- CHAPTER NO. 5 ----------------

    // -------- soltuion 1 --------
    // digit_sum();

    // -------- soltuion 2 --------
    // find_sqrt();

    // -------- soltuion 3 --------
    // hot_cold();

    // -------- soltuion 4 --------
    // own_pow();

    // ---------------- CHAPTER NO. 6 ----------------

    // -------- soltuion 1 --------
    // int x,y;

    // printf("Enter first a number: ");
    // scanf("%d", &x);

    // printf("Enter second a number: ");
    // scanf("%d", &y);

    // int* x_pointer = &x, * y_pointer = &y;
    // max_using_pointer(x_pointer, y_pointer);

    // -------- soltuion 2 --------
    // arr_reverse();

    // -------- soltuion 3 --------
    // char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    //                     'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    // print_alphabets(alphabets);

    // ---------------- CHAPTER NO. 7 ----------------

    // -------- soltuion 1 --------
    // x_occurrence();

    // -------- soltuion 2 --------
    // largest_number();

    // -------- soltuion 3 --------
    // insert_end();

    // ---------------- CHAPTER NO. 8 ----------------

    // -------- soltuion 1 --------
    // upper_case_vowels();

    // -------- soltuion 2 --------
    // highest_frequency_string();

    // -------- soltuion 3 --------
    // remove_blank_spaces();

    // -------- soltuion 4 --------
    lower_upper();

    return 0;
}