#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int pro=n*m;
        if(pro%2==0) pro/=2;
        else pro=1+pro/2;
        printf("%d\n",pro);
    }
}