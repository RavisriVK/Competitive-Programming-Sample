#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    int students[n][m];
    getchar();
    int max[m];
    for(int i=0; i<m; i++)
    {
        students[0][i]=getchar();
        max[i]=students[0][i];
    }
    getchar();
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            students[i][j]=getchar();
            if(max[j]<students[i][j])
                max[j]=students[i][j];
        }
        getchar();
    }
    int successes=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(students[i][j]==max[j])
            {
                successes++;
                break;
            }
        }
    }
    printf("%d\n",successes);
}