#include<stdio.h>

int winner(int n, int *a)
{
    if(n==1)
    {
        return 1;
    }
    else if(a[0]==1)
    {
        return !winner(n-1,a+1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int out=winner(n,a);
        if(out==1)
            printf("First\n");
        else 
            printf("Second\n");
    }
}