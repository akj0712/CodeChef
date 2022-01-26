#include<stdio.h>
int main(void){
    int n, a, b, c;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        b = 1;
        c = 0;
        while (a/b > 0)
        {
            b = b*5;
            c = c + (a/b) ;
        }
        printf("%d", c);
        
    }
    
}