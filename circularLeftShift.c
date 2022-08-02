#include <stdio.h>
#include <string.h>
// 1 0 1 0 0 1 0
// 0 1 0 0 1 0 1
void left_shift(int n)
{
    int temp = 0;
    char l[10];
    int i = 0;
    int b = n;
    int j = 0;

    while (n > 0)
    {
        temp = l[i + 1];
        l[i + 1] = l[i];
        l[i] = temp;
        i++;
        n = n / 10;
    }
    // l[i+1]='\0';
    printf("%c", l[0]);
    while (b > 0)
    {
        // printf("1");
        printf("%c", l[j]);
        b = b / 10;
        j++;
    }
}

int main()
{
    int binary_num;
    printf("Enter the number :\n");
    scanf("%d", &binary_num);

    // left_shift(100011);
    printf("%d",binary_num<<2);
    return 0;
}