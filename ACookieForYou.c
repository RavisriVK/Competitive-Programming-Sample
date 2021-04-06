#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int out[N];
    for(int k=0; k<N; k++)
    {
        long long a,b,n,m;
        scanf("%lld %lld %lld %lld",&a,&b,&n,&m);
        if(a+b<n+m)
        {
            out[k]=0;
        }
        else
        {
            long long dif=a<b?b-a:a-b;
            long long min=a<b?a:b;
            if(n>=dif)
            {
                n-=dif;
                a=(b=min);
                if(min>=m)
                {
                    out[k]=1;
                }
                else
                {
                    out[k]=0;
                }
                continue;
            }
            else
            {
                if(a>b)
                {
                    a-=n;
                    if(b>=m)
                        out[k]=1;
                    else
                        out[k]=0;
                    continue;
                }
                else if(b>a)
                {
                    b-=n;
                    if(a>=m)
                        out[k]=1;
                    else
                        out[k]=0;
                    continue;
                }
            }
        }
    }
    for(int k=0; k<N; k++)
    {
        if(out[k]==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}