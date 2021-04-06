#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if((x==y&&x>=z)||(y==z&&y>=x)||(z==x&&z>=y))
        {
            int m=min(min(x,y),z);
            int M=max(max(x,y),z);
            printf("YES\n%d %d %d\n",m,m,M);
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
}