#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long a,b,c;
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a<c)
            printf("1 ");
        else
            printf("-1 ");
        if((1.0*a)>(1.0*c/b))
            printf("%ld\n",b);
        else
            printf("-1\n");
    }
}