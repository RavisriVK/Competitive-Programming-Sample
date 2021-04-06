#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        for(long long i=0; i<n; i++)
            scanf("%lld",&a[i]);
        long long moves=0;
        for(long long i=n-2; i>=0; i--)
        {
            if(a[i]>a[i+1])
                moves+=(a[i]-a[i+1]);
        }
        /*long long moves=n-1;
        while(ink>0)
        {
            if(a[ink]>=a[ink-1])
            {
                ink--;
            }
            else
            {
                moves+=(a[ink-1]-a[ink]);
                ink--;
            }
        }*/
        printf("%lld\n",moves);
    }
}