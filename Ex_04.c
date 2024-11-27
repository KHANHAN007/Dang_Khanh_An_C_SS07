#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang.");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu thu %d: ", i + 1);
        scanf("%d", (a + i));
    }
}