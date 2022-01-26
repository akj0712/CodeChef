// #include<stdio.h>
// int main(void){
//     int t, n;
//     long int f;
//     int fact(int n){
//         if (n==0||n==1)
//             return 1;
//         else
//             return n*fact(n-1);
//     }
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &n);
//         f = fact(n);
//         printf("%li\n", f);
//     }
// }





#include<stdio.h>

int main()
{
    int t,n,a[200],i,j,k,l,m;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d",&n);
        m=1;
        a[0]=1;
        for(j=2;j<=n;j++)
        {
            l=0;
            for(k=0;k<m;k++)
            {
                a[k]=a[k]*j+l;
                l=a[k]/10;
                a[k]=a[k]%10;
            }
            while(l)
            {
	            a[k]=l%10;
                k++;
                m++;
                l=l/10;
            }
        }
        for(i=m-1;i>=0;i--)
            printf("%d",a[i]);

        printf("\n");
    }
    return 0;
}