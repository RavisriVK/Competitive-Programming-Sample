#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        long long a[n], b[n];
        for(int i=0; i<n; i++)
            scanf("%lld %lld",&a[i],&b[i]);
        
        unsigned long long bullets=0;

        for(int i=0; i<n; i++)
            bullets+=max(0,a[i]-b[(n+i-1)%n]);

        unsigned long long minb=bullets+a[0]-max(0,a[0]-b[n-1]);
        
        for(int i=1; i<n; i++)
            minb=min(minb,bullets+a[i]-max(0,a[i]-b[(n-1+i)%n]));
        printf("%lld\n",minb);
    }
}