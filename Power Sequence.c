#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}

#define MAXVALUE 0x7fffffffffffffff


int main()
{
    long long n;
    scanf("%lld",&n);
    long long a[n];
    long long sum=0, mx=1e15;
    for(long long i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    qsort(a,n,sizeof(long long),cmp);
    double temp=pow(1.0*a[n-1],1.0/(n-1));
    long long lim=(long long)ceil(temp);
    long long ans=sum;
    for(long long i=1; i<=lim; i++)
    {
        long long cost=0;
        long long power=1;
        int flag=0;
        for(long long j=0; j<n; j++)
        {
            cost+=MOD(a[j]-power);
            power*=i;
            if(power>=mx && j<n-1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            ans=MIN(ans,cost);
    }
    printf("%lld\n",ans);
}