#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int maxSpent=0;
        while(n>0)
        {
            if(n<10)
            {
                maxSpent+=n;
                n=0;
            }
            else
            {
                maxSpent+=10*(n/10);
                n=n/10+n%10;
            }
        }
        printf("%d\n",maxSpent);
    }
}