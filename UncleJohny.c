#include <stdio.h>
int main(void)
{
    int t, n, u, temp;
    int a[100];
    printf("Enter Number of test cases: ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        printf("Enter The number of songs: ");
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            // printf("Enter the array elements: ");
            scanf("%d", &a[j]);
        }
        printf("in unsorted array: ");
        scanf("%d", &u);
        for (int k = 0; k < n - 1; k++)
        {
            for (int l = 0; l < n - k - 1; l++)
            {
                if (a[l] > a[l + 1])
                {
                    temp = a[l];
                    a[l] = a[l + 1];
                    a[l + 1] = temp;
                }
            }
        }
        for (int b = 0; b < n; b++)
        {
            printf("H%d", a[b]);
        }
        
        // for (int m = 1; m <= n; m++)
        // {
        //     if (a[u] == a[m])
        //     {
        //         printf("%d", m);
        //     }
        // }
    }
}