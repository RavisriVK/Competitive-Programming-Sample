#include<stdio.h>


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        long long dif=b-2*a;
        if(dif>=0)
        {
            dif=2*a;
            printf("%d %lld\n",a,dif);
        }
        else
        {
            printf("-1 -1\n");
        }
    }
}