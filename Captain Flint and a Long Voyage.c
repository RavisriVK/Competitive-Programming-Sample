#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int d;
        if(n%4==0)
            d=n/4;
        else
            d=1+n/4;
        for(int i=0; i<n-d; i++)
            putchar('9');
        for(int i=0; i<d; i++)
            putchar('8');
        printf("\n");
    }
}