    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        long long int rows;

        start:

        printf("Enter number of rows: ");
        scanf("%lld", &rows);

        for (int i=1; i<=rows; ++i)
        {
            for (int j=1; j<=i; ++j)
            {
                 printf("%d ", j);
            }
            printf("\n");
        }

        goto start;

        return 0;
    }
