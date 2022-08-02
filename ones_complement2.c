#include <stdio.h>
#include <string.h>

void ones(char bin[])
{

    int n = strlen(bin);
    int i;
    char ones[100];

    for (i = 0; i < n; i++)
    {
        ones[i] = bin[i] == '1' ? '0' : '1';
    }
    ones[i]='\0';
    printf("%s",ones);
}
int main()
{
    char binary_num[100];

    printf("Enter the Binary number (combination of 0's and 1's):");
    scanf("%s", &binary_num);

    ones(binary_num);
    return 0;
}