#include<stdio.h>
int main(void){
    int t, n, count;
    scanf("%d", &t);
    for ( int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        while (n > 0)
        {
            if (n % 10 == 4)
            count++;
            n = n/10;
        }
        printf("%d\n", count);
        count = 0;
    }
}