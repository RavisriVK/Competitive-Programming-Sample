#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, k;
        scanf("%d %d",&n,&k);
        int upto=MIN(k,n/k);
        int mf=1;
        for(int i=1; i*i<=n; i++)
            if(n%i==0)
            {
                if(n/i<=k)
                    mf=MAX(mf,n/i);
                else if(i<=k)
                    mf=MAX(mf,i);
            }
        printf("%d\n",n/mf);
    }
}