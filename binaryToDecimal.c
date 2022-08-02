#include <stdio.h>
#include <string.h>

void binaryToDecimal(char bin[])
{

    int base = 1;
    int dec = 0;
    int i;
    for (i = strlen(bin) - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {

            dec = dec + base;
        }
        base = base * 2;
    }
    printf("%d\n", dec);
}
int main()
{
    char binary_number[100];
    printf("Enter the binary number :\n");
    scanf("%s", &binary_number);

    binaryToDecimal(binary_number);
    return 0;
}