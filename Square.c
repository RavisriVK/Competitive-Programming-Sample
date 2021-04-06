#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a1,b1;
        scanf("%d %d",&a1,&b1);
        int a2,b2;
        scanf("%d %d",&a2,&b2);
        if((a1+b2==b1&&b1==a2)||(b1+a2==a1&&a1==b2)||(a1+a2==b1&&b1==b2)||(b1+b2==a1&&a1==a2))
            printf("Yes\n");
        else
            printf("No\n");
    }
}