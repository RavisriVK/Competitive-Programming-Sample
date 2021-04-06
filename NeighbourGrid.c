#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n][m];
        int goodness=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]>4 || (a[i][j]==4&&(i==0||i==n-1||j==0||j==m-1)) || (a[i][j]==3&& ((i==0&&(j==0||j==m-1))||(i==n-1&&(j==0||j==m-1)))) )
                    goodness=0;
            }
        }
        if(goodness==0)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        for(int i=1; i<n-1; i++)
        {
            for(int j=1; j<m-1; j++)
            {
                a[i][j]=4;
            }
        }
        for(int i=1; i<n-1; i++)
            a[i][0]=(a[i][m-1]=3);
        for(int i=1; i<m-1; i++)
            a[0][i]=(a[n-1][i]=3);
        a[0][0]=a[0][m-1]=a[n-1][0]=a[n-1][m-1]=2;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}