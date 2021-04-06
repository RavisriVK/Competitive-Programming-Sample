#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, m;
        scanf("%d %d",&n,&m);
        if(n>2)
            printf("%d\n",2*m);
        else if(n==2)
            printf("%d\n",m);
        else 
            printf("%d\n",0);
    }
}