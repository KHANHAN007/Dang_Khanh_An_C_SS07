#include <stdio.h>

int main()
{
    int numbers[5]={1,2,3,4,5}, flag = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d ", *(numbers + i));
            flag = 1;
        }
    }
    if (!flag)
        printf("Mang khong chua so chan.");
}