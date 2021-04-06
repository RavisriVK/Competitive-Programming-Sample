#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        long long ma;
        scanf("%lld",&ma);
        a[0]=ma;
        for(int i=1; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]<ma)
                ma=a[i];
        }
        long long b[n];
        long long mb;
        scanf("%lld",&mb);
        b[0]=mb;
        for(int i=1; i<n; i++)
        {
            scanf("%lld",&b[i]);
            if(b[i]<mb)
                mb=b[i];
        }
        long long moves=0;
        long long cut;
        for(int i=0; i<n; i++)
        {
            cut=min(a[i]-ma,b[i]-mb);
            moves+=cut;
            a[i]-=cut;
            b[i]-=cut;
            moves+=(a[i]-ma)+(b[i]-mb);
        }
        printf("%lld\n",moves);
    }
}