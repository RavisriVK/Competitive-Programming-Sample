#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
        printf("%d\n",n);
    else if(n>-10)
        printf("0\n");
    else 
    {
        n*=-1;
        int d=min(n%10, (n/10)%10 );
        n=10*(n/100)+d;
        n*=-1;
        printf("%d\n",n);
    }
}