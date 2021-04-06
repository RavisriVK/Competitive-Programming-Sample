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
        long long a,b,n,s;
        scanf("%lld %lld %lld %lld",&a,&b,&n,&s);
        long long temp=MIN((a*n),((s/n)*n));
        s-=temp;
        //printf("%d %d\n",temp,s);
        if(b>=s)
            printf("YES\n");
        else
            printf("NO\n");
    }
}