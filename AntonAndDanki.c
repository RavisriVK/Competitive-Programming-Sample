#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int c=getchar();
    int A=0,D=0;
    while(c!='\n')
    {
        if(c=='A')
            A++;
        else 
            D++;
        c=getchar();
    }
    if(A==D)
        printf("Friendship\n");
    else if(A>D)
        printf("Anton\n");
    else 
        printf("Danik\n");
}