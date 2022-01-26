#include<stdio.h>
int main(void){
    int t, n, rem, reverse = 0;
    printf("Number of test cases: ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        while (n != 0)
        {
            rem = n % 10;
            reverse = reverse*10 + rem;
            n = n/10;
        }
        printf("%d\n", reverse);
        reverse = 0;
    }
}