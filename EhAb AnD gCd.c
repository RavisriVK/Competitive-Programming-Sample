#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
            printf("%d %d\n",n/2,n/2);
        else
            printf("%d %d\n",1,n-1);
    }
}