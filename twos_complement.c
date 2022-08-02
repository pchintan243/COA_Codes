#include <stdio.h>
#include <string.h>

void twos(char ones[], int n)
{
    char twos[100];
    int j, i;
    for (i = 0; i < n; i++)
    {

        twos[i] = ones[i];
    }
    twos[i] = '\0';
    for (j = n - 1; j >= 0; j--)
    {
        if (ones[j] == '1')
        {
            twos[j] = '0';
        }
        else
        {
            twos[j] = '1';
            break;
        }
    }
    printf("%s", twos);
}

void ones(char bin[])
{

    int n = strlen(bin);
    int i;
    char ones[100] = "";

    for (i = 0; i < n; i++)
    {
        ones[i] = bin[i] == '1' ? '0' : '1';
    }
    ones[i] = '\0';
    printf("%s\n", ones);
    twos(ones, n);
}

int main()
{
    char binary_num[100];

    printf("Enter the Binary number (combination of 0's and 1's):");
    scanf("%s", &binary_num);

    ones(binary_num);
    return 0;
}