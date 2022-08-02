#include <stdio.h>

void decimalToBinary(int n)
{
    int bin[100];
    int rem = 0;
    int i = 0;

    while (n > 0)
    {
        rem = n % 2;
        bin[i] = rem;
        n = n / 2;
        i++;
    }
    
    for(i = i -1; i >= 0; i--)
    {
        printf("%d",bin[i]);
    }
}

int main()
{
    int decimal_number;
    printf("Enter the decimal number :\n");
    scanf("%d", &decimal_number);

    decimalToBinary(decimal_number);

    return 0;
}