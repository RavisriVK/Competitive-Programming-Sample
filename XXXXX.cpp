#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int first;
        for(first=0; first<n && a[first]%x==0; first++)
            ;
        int last;
        for(last=0; n-1-last>=0 && a[n-1-last]%x==0; last++)
            ;
        if(first==n)
            printf("-1\n");
        else if(sum%x!=0)
            printf("%d\n",n);
        else
            printf("%d\n",n-1-MIN(first,last));
    }
}