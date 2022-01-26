#include<stdio.h>
int main(void){
    int n, a, b;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (b != 0)
        {
            printf("%d\n", a%b);
        }
        else
        {
            printf("Invalid");
        }
    }
}
