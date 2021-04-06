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
        int x1, y1, z1;
        scanf("%d %d %d",&x1, &y1, &z1);
        int x2, y2, z2;
        scanf("%d %d %d",&x2, &y2, &z2);
        int ans=MIN(z1,y2)*2;
        if((x1+z1-z2-MIN(z1,y2))<0)
            ans+=2*(x1+z1-z2-MIN(z1,y2));
        printf("%d\n",ans);
    }
}