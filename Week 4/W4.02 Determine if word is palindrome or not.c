#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i, j, c=0;
    char word[20];

    printf("Enter length of the word :");
    scanf("%d", &n);

    printf("Enter the word :");
    scanf("%s", &word);

    printf("The reverse of the given word is :\n");

    for (i=0, j=n-1; i<n, j>=0;i++, j--)
    {
        if(word[j] == word[i])
            c++;
        printf("%c", word[j]);
    }

    if (c == n)
    {
        printf("\nThe entered word is a palindrome.");
    } else
    {
        printf("\nThe entered word isn't a palindrome.");
    }

    return 0;
}
