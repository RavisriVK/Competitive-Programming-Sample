#include<stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    printf("%d\n",min(min((k*l)/(n*nl),(c*d)/n),p/(n*np)));
}