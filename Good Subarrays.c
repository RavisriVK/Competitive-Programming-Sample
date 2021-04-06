#include<stdio.h>

#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}
int main()
{
    long long N;
    scanf("%lld",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        char s[100001];
        scanf("%s",s);
        long long sum[n+1];
        sum[0]=0;
        for(long long i=1; i<=n; i++)
            sum[i]=sum[i-1]+((long long)(s[i-1]-'0'));

        for(long long i=0; i<=n; i++)
            sum[i]=sum[i]-i;

        qsort(sum,n+1,sizeof(long long),cmp);

        /*for(int i=0; i<=n; i++)
            printf("%lld ",sum[i]);
        printf("\n");*/

        long long ga=0;
        long long eq;
        for(long long i=0; i<=n; i++)
        {
            eq=0;
            for(long long j=sum[i]; i<=n && sum[i]==j; i++)
                eq++;
            i--;
            //printf("%lld ",eq);
            ga+=((eq*(eq-1))/2);
        }
        //printf("\n");
        printf("%lld\n",ga);
    }
}
