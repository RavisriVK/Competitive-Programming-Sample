#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, d;
        scanf("%d %d",&n, &d);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int max=0;
        for(int i=1; i<n; i++)
        {
            while(d>=i&&a[i]>0)
            {
                max+=1;
                a[i]-=1;
                d-=i;
            }
        }
        printf("%d\n",a[0]+max);
    }
}