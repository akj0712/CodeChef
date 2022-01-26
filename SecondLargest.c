#include<stdio.h>
int main(void){
    int t;
    long int a[3];
    scanf("%d", &t);
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%li", &a[i]);
        }
    
        for (int i = 0; i < 3; i++)
        {
            for (int j = i+1; j < 3; j++)
            {
                if (a[i] > a[j])
                {
                    a[i] = a[i]^a[j];
                    a[j] = a[i]^a[j];
                    a[i] = a[i]^a[j];
                }
            }
        }
        printf("%li\n", a[1]);
    }
    
}