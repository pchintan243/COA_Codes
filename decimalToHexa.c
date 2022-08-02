#include <stdio.h>

void decimalToHexadecimal(int n)
{
    char hexa[100];
    int i = 0;
    int rem;

    while (n > 0)
    {
        rem = n % 16;
        if (rem < 10)
        {
            hexa[i] = 48 + rem;
        }
        else
        {
            hexa[i] = 55 + rem;
        }

        i++;
        n = n / 16;
    }
    for (i = i - 1; i >= 0; i--)
    {

        printf("%c", hexa[i]);
    }
}

int main()
{
    int decimal_number;
    printf("Enter the decimal number :\n");
    scanf("%d", &decimal_number);

    decimalToHexadecimal(decimal_number);

    return 0;
}