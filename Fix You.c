#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, m;
        scanf("%d %d",&n,&m);
        char a[n][m+1];
        for(int i=0; i<n; i++)
            scanf("%s",a[i]);
        int change=0;
        for(int i=0; i<m-1; i++)
            if(a[n-1][i]=='D')
                change++;
        for(int i=0; i<n-1; i++)
            if(a[i][m-1]=='R')
                change++;
        printf("%d\n",change);
    }
}