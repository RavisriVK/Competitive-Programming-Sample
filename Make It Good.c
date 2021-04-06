#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int incMax=0, decMax=0;
        int i;
        for(i=n-1; i>=1 && a[i-1]>=a[i]; i--)
            incMax++;
        for(;i>=1 && a[i-1]<=a[i]; i--)
            decMax++;
        int k=n-incMax-decMax-1;
        printf("%d\n",k);
    }
}