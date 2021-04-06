#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int bit=3;
        while(n%bit!=0)
            bit=(bit<<1) + 1;
        printf("%d\n",n/bit);
    }
}