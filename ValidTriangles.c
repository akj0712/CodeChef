#include<stdio.h>
int main(void){
    int t, a[3], sum = 0;
    // printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--)
    {
        // printf("Enter the angles of triangle: ");
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        // printf("%d", sum);
        if (sum ==  180)
            printf("YES\n");
        else
            printf("NO\n");
        sum = 0;
    }
    
}