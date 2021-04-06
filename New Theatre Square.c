#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,m,x,y;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        char a[n][m];
        int white=0;
        char temp;
        scanf("%c",&temp);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='.')
                    white++;
            }
            scanf("%c",&temp);
        }
        if(2*x<=y)
        {
            printf("%d\n",white*x);
        }
        else
        {
            int inWhite=0;
            int t1c1=0, t1c2=0;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(a[i][j]=='.')
                    {
                        if(j==0||a[i][j-1]=='*')
                            inWhite=0;
                        inWhite++;
                        if(j==m-1||a[i][j+1]=='*')
                        {
                            t1c1+=inWhite%2;
                            t1c2+=inWhite/2;
                        }
                    }
                }
            }
            printf("%d\n",t1c2*y+t1c1*x);
        }
        
    }
}