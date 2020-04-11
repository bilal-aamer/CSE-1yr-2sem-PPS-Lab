#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{

    char *found,s[20],t[20];
    int i;

    printf("Enter the string 'S' :");
    scanf("%s", &s);

    printf("Enter the string 'T' :");
    scanf("%s", &t);

    found = strstr(s,t);

    if(found)
    {
        printf("%s is found in %s at the position : %d",t,s,found-s+1);
    }else
    {
        printf("-1");
    }
    return 0;
}
