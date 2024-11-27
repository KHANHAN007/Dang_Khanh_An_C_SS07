#include <stdio.h>

int nt(int n)
{
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", (a + i));
    }
    for (int i = 0; i < n; ++i)
    {
        if (nt(*(a + i)))
            printf("%d ", *(a + i));
    }
}