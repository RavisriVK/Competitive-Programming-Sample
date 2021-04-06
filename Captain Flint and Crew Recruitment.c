#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int d=n-30;
        if(n<31) 
            printf("NO\n");
        else if(d!=6&&d!=10&&d!=14)
            printf("YES\n14 10 6 %d\n",n-30);
        else if(d==6)
            printf("YES\n5 6 10 15\n");
        else if(d==10)
            printf("YES\n5 6 14 15\n");
        else if(d==14)
            printf("YES\n6 7 10 21\n");
    }
}