#include <stdio.h>
#include <stdlib.h>

// This project is designed to provide practice with while loops for beginners in C language.
// In this project, prime factors are investigated.

int get_number(char* str) // the sentences in main funtion is assigned to str.
{
    printf("%s", str);
    int f_number;
    scanf("%d", &f_number);
    return f_number; // f_number is assigned to number in main function.
                     // because of that, return number is used (return method)

}

void p_factor(p_number) // There is no return value. In the other words, there is no value is assigned to value in main function.
                        // Because of that void method is used.
{
    int i = 2;
    while(i<=p_number) // i is denominator. It can be equal to dividend. If dividend is prime itself, i can be equal to p_number.
    {
        if(p_number%i == 0)
        {
            printf("prime factor : %d\n", i);
            p_number = p_number / i; // for example p_number = 15. 15%2 != 0, 15%3 = 0 15/3 = 5.
            i++;
        }
        else
        {
            i++;
        }

    }
}
int main()
{
    int number = get_number("Enter your number to be investigated for its prime factors\n");
    p_factor(number);
    return 0;
}
