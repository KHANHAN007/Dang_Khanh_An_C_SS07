#include <stdio.h>

int main()
{
    int numbers[5];
    for (int i = 0; i < 5; ++i)
    {
        // scanf("%d", &numbers[i]);
        scanf("%d", (numbers + i));
        printf("%d ", *(numbers + i));
    }
}