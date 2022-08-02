#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ones(char *n)
{
    
    char *newname = (char *)malloc(sizeof(char) * strlen(n));
    int i = 0;
    for (i = 0; i < strlen(n); i++)
    {
        if (n[i] == '0')
        {
            newname[i] = '1';
        }
        else if (n[i] == '1')
        {
            newname[i] = '0';
        }
        else
        {
            printf("Please enter the correct binary number..!!\n");
            exit(0);
        }
    }
    newname[i] = '\0';
    return newname;
}
int main()
{

    char n[100];
    // n = (char *)malloc(sizeof(char) * 100);
    printf("Enter the binary number: ");
    scanf("%s", &n);
    printf("%s", ones(n));

    return 0;
}