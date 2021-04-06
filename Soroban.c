#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("O-|-OOOO\n");
        return 0;
    }
    while(n>0)
    {
        int d=n%10;
        n/=10;
        if(d<5)
        {
            printf("O-|");
        }
        else
        {
            printf("-O|");
            d-=5;
        }
        for(int i=0; i<d; i++)
            printf("O");
        printf("-");
        for(int i=0; i<(4-d); i++)
            printf("O");
        printf("\n");
    }
}