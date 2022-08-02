#include <stdio.h>

void binaryToDecimal(int n)
{

    int base = 1;
    int dec = 0;
    int rem = 0;
    while (n > 0)
    {

        rem = n % 10;
        dec = dec + rem * base;
        base = base * 2;
        n = n / 10;
    }
    printf("%d\n", dec);
}
int main()
{
    int binary_number;
    printf("Enter the binary number :\n");
    scanf("%d", &binary_number);

    binaryToDecimal(binary_number);
    return 0;
}