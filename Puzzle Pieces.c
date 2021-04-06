#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==1||b==1) printf("YES\n");
        else if(a==2&&b==2) printf("YES\n");
        else printf("NO\n");
    }
}