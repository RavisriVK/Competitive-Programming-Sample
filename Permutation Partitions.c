#include<stdio.h>

int main()
{

    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long maxp=n*k-((k*(k-1))/2);
    int a[n];
    for(long long i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%lld ",maxp);
    long long positions[k];
    long long pp=0;
    for(long long i=0; i<n; i++)
    {
        if(a[i]>n-k)
        {
            positions[pp]=i;
            pp++;
        }
    }
    long long p=998244353;
    long long val=1;
    for(int i=1; i<k; i++)
        val=(val*(positions[i]-positions[i-1]))%p;
    printf("%lld\n",val);
}