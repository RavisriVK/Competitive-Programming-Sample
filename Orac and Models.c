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
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1; i<=n; i++)
            scanf("%d",&a[i]);
        int max[n+1];
        for(int i=1; i<=n; i++)
            max[i]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=2*i; j<=n; j+=i)
            {
                if(a[i]<a[j])
                {
                    max[j]=MAX(max[j],1+max[i]);
                }
            }
        }
        int m=max[1];
        for(int i=2; i<=n; i++)
            m=MAX(m,max[i]);
        printf("%d\n",m);
    }
}