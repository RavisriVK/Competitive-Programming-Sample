#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int min=n>m?m:n;
    if(min%2==1)
    printf("Akshat\n");
    else 
        printf("Malvika\n");
}