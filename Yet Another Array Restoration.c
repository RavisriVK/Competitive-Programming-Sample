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
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        int l=0;
        for(int i=n-2; i>=0; i--)
        {
            if((y-x)%(i+1)==0)
            {
                l=i;
                break;
            }
        }
        int dif=(y-x)/(l+1);
        for(int i=x; i<=y; i+=dif)
        {
            printf("%d ",i);
        }
        n=n-2-l;
        while(n>0 && (x-dif)>=1)
        {
            printf("%d ",x-dif);
            x-=dif;
            n--;
        }
        while(n>0)
        {
            printf("%d ",y+dif);
            y+=dif;
            n--;
        }
        printf("\n");
    }
}