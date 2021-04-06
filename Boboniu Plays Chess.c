#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))

int n,m,sx,sy;

int print(int r, int c)
{
    int next;
    printf("%d %d\n",r,c);
    for(int i=1; i<c; i++)
        printf("%d %d\n",r,i);
    for(int i=c+1; i<=m; i++)
        printf("%d %d\n",r,i);
    if(c==m) next=m-1;
    else next=m;
    return next;
}
int main()
{

    scanf("%d %d %d %d",&n,&m,&sx,&sy);
    int nc=print(sx,sy);
    for(int i=1; i<sx; i++)
    {
        nc=print(i,nc);
    }
    for(int i=sx+1; i<=n; i++)
    {
        nc=print(i,nc);
    }
}