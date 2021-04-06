#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

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
        long long p,f;
        scanf("%lld %lld",&p, &f);
        long long cs, cw;
        scanf("%lld %lld",&cs,&cw);
        long long s, w;
        scanf("%lld %lld",&s,&w);
        long long minw, maxw, minc, maxc;
        if(s<=w)
        {
            minw=s; minc=cs;
            maxw=w; maxc=cw;
        }
        else
        {
            minw=w; minc=cw;
            maxw=s; maxc=cs;
        }
        long long moves= MIN((p/minw + f/minw),minc);
        long long ans=0;
        for(long long i=0; i<=moves; i++)
        {
            if((p-i*minw)>=0 && (f-(moves-i)*minw)>=0)
            {
                long long temp=MIN(maxc,((p-i*minw)/maxw + (f-(moves-i)*minw)/maxw));
                ans=MAX(ans,temp);
            }
        }
        printf("%lld\n",ans+moves);
    }
}