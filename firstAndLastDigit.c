#include<stdio.h>
#include<math.h>
int main(void){
    int n, num, count, first, last;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        count = log10(num);
        first = num / pow(10, count);
        last = num % 10;
        printf("%d\n", first + last);
    }
}
