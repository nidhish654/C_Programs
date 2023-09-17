/*Read the symbol of a binary arithmetic operator (such as +, -, *, /) and its two operands 
from the keyboard and perform the operation on those two operands depending upon the operator
entered by the user. Print the result accordingly.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
        int a, b, res;
        char op;
        printf("Enter The Operation (+,-,*,/) : ");
        scanf("%c", &op);
        printf("Enter The First Number : ");
        scanf("%d", &a);
        printf("Enter The Second Number : ");
        scanf("%d", &b);
        switch (op)
        {
        case '+':
                printf("The Sum = %d", (a + b));
                break;
        case '-':
                printf("The Difference = %d", (a - b));
                break;
        case '*':
                printf("The Product = %d", (a * b));
                break;
        case '/':
                printf("The Quotient = %d", (a / b));
                break;
        default:
                printf("Invalid");
                break;
        }
        return 0;
}