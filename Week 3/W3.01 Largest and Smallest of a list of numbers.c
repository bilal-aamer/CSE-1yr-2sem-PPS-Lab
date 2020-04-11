#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j,tmp;

    printf("Enter the size of the list :");
    scanf("%d", &n);

    int list[n];

    for (i=0; i < n ; i++)
    {
        printf("Enter %d element :", i+1);
        scanf("%d", &list[i]);
    }

     for(i=0;i<n;i++)
     {

           for(j=0;j<n-i;j++)

           {

                 if(list[j]>list[j+1])

                 {

                       tmp=list[j];

                       list[j]=list[j+1];
                       list[j+1]=tmp;

                 }
           }

     }

     /*printf("\n\n Array in the ascending order is - \n");

     for(i=0;i<n;i++)

     {

           printf("\t %d",list[i]);

     }*/

     printf("The largest of the entered numbers is : %d\nThe smallest of the entered numbers is : %d", list[n-1], list[0]);






    return 0;
}
