#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, m, k;
        scanf("%d %d %d",&n,&m,&k);
        int max=n/k;
        int d=m-max;
        int r=k-1;
        int min=((d%r==0)?(d/r):(1+d/r));
        int points=max-min;
        if(max>=m)
            printf("%d\n",m);
        else if(max>min)
            printf("%d\n",points);
        else 
            printf("0\n");
    }
}