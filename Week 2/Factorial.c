#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i;
    long long int fact = 1;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n != 0)
    {
        for (i = 1; i <= n ; i++)
        {
            fact = fact * i;
        }
    } else if (n =0)
    {
        printf("The factorial of 0 is : 1");
    } else
    {
        printf("Invalid Input");
    }

    printf("The factorial of %d is : %lld",n , fact);


    return 0;
}
