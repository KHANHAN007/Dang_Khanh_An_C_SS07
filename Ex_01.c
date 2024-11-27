#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(numbers) / sizeof(int));
    for (int i = 0; i < sizeof(numbers) / sizeof(int); ++i)
    {
        printf("%d ", *(numbers + i));
    }
}