#include<stdio.h>
int rr(int x, int y, int n)
{
    int m=(n-y)/x;
    return m*x+y;
}

int main()
{
    int N;
    scanf("%d",&N);
    int out[N];
    int x, y, n;
    for(int i=0; i<N; i++)
    {
        scanf("%d %d %d",&x,&y,&n);
        out[i]=rr(x,y,n);
    }
    for(int i=0; i<N; i++)
    {
        printf("%d\n",out[i]);
    }
}