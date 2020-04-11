#include <stdio.h>
#include <stdlib.h>

int main ()
{

    double n1,n2;
    char opr;

    printf("Enter 1st Number :");
    scanf("%lf", &n1);

    printf("Enter 2nd Number :");
    scanf("%lf", &n2);

    printf("Enter the required operator :");
    scanf(" %c", &opr);

    switch (opr)
  {
    case '+':
        printf("The Sum of the two is : %lf", n1+ n2);
        break;
    case '-':
        printf("The Difference of the two is : %lf", n1- n2);
        break;
    case '*':
        printf("The Product of the two is : %lf", n1* n2);
        break;
    case '/':
        printf("The Ratio of the two is : %lf", n1/ n2);
        break;
    /*case '%':
        printf("The Remainder of the two is : %lf", n1% n2);
        break;*/
    default:
        printf("Invalid Operator");
        break;
  }


    return 0;
}
