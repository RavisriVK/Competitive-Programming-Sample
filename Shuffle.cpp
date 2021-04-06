#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,x,m;
        scanf("%d %d %d",&n,&x,&m);
        int a[m], b[m];
        int min=x, max=x;
        for(int i=0; i<m; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            if(a[i]<=max&&b[i]>=max||a[i]<=min&&b[i]>=min||a[i]>=min&&b[i]<=max)
            {
                min=MIN(min,a[i]);
                max=MAX(max,b[i]);
            }
        }
            printf("%d\n",1+max-min);
    }
}