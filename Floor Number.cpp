#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

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
        int n,x;
        scanf("%d %d",&n,&x);
        int ans=1 + (n-2)/x;
        if(n<=2) {
            printf("1\n");
            continue;
        }
        if((n-2)%x!=0)
            ans+=1;
        printf("%d\n",ans);
    }
}