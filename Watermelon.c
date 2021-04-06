#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    if(n%2==1||n<4)
        printf("NO\n");
    else
        printf("YES\n");
}