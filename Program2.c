/*Write a C function say void GuessMe( ) that assumes a number between 1 and 100 inclusive.
In your function, you can call int rand( ) function, which is defined in C library to assume
such a number.  From your function prompt the user to guess the number and enter the number 
he has guessed. If the user guesses the number correctly, print out a congratulatory message 
and exit. If the user makes a wrong guess, the user is given an opportunity to guess again.
The process may be repeated till user guesses correctly. Print the number of guesses a user
makes to get the correct value.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void GuessMe(int a, int ra,int i);
int main()
{
    int i, num, n,b;
    printf("Enter The Number Of Guesses\n");
    scanf("%d", &n);
    srand(time(NULL));
    b = rand() % 10 + 1;
    for (i = 0; i < n; i++)
    {
        printf("Guess The Number (1-10) :\n");
        scanf("%d", &num);
        GuessMe(num, b,i+1);
    }
    return 0;
}
void GuessMe(int a, int ra,int i)
{
    if (ra == a)
    {
        printf("Congratulations, U Guessed The Number Correctly\n");
        printf("Number of Guesses = %d",i);
        exit(0);
    }
    else
    {
        printf("Opps, Please Try Again\n");
    }
}
