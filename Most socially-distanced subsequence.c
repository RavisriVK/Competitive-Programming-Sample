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
        int out[n];
        int outp=0;
        out[outp]=a[0];
        outp++;
        for(int i=1; i<n-1; i++)
        {
            if((a[i]>=a[i-1]&&a[i]<=a[i+1])||(a[i]<=a[i-1]&&a[i]>=a[i+1]))
                ;
            else 
            {
                out[outp]=a[i];
                outp++;
            }
        }
        out[outp]=a[n-1];
        printf("%d\n",1+outp);
        for(int i=0; i<=outp; i++)
            printf("%d ",out[i]);
        printf("\n");
    }
}