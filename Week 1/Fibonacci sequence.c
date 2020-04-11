#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t1 = 0, t2 = 1, nexT;
    printf("Enter the required no of terms :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", t1);

        nexT = t1 + t2;
        t1 = t2;
        t2 = nexT;

    }




    return 0;
}

