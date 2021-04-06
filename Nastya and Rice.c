#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,a,b,c,d;
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        if((n*(a+b))<(c-d)||(n*(a-b))>(c+d))
            printf("No\n");
        else
            printf("Yes\n");
    }
}