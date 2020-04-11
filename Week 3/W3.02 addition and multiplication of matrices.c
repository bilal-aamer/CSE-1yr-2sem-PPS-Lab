#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int n =3;
    int arr[n][n],arr1[n][n],arr2[n][n];
    printf("Enter the size of the matrix :");
    scanf("%d", &n);
    printf("Enter the 1st matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the 2nd matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    char opr;
    printf("Enter either '+' or '*' :");
    scanf(" %c", &opr);
    switch (opr)
    {
    case '+':
        for ( i=0; i<n; i++)
    {
        for (j=0; j<n;j++)
        {
            printf("%d\t", arr1[i][j]+arr2[i][j]);
        }
    }break;
    case '*':
        //printf("You multiplied 2 matrices.");

        for (i=0; i<n;i++)
        {
            for(j=0; j<n;j++)
            {
                printf("%d", arr1[i][j]*arr2[j][i]);
            }
        }

        break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}
