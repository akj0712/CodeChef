#include "stdio.h"
int main(void)
{
    int n, d, ld, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        while (d != 0)
        {
            ld = d % 10;
            sum = sum + ld;
            d = d / 10;
        }
        printf("%d\n", sum);
        sum = 0;
    }
}