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
            printf("%d\n",n/2);
        else
            printf("%d\n",(n-1)/2);
    }
}