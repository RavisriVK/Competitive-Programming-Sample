#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int temp;
        int row[n];
        int column[m];
        for(int i=0; i<n; i++)
            row[i]=0;
        for(int i=0; i<m; i++)
            column[i]=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                scanf("%d",&temp);
                if(temp==1)
                {
                    row[i]=1;
                    column[j]=1;
                }
            }
        int rmin=0;
        int cmin=0;
        for(int i=0; i<n; i++)
            if(row[i]==0) rmin++;
        for(int i=0; i<m; i++)
            if(column[i]==0) cmin++;
        int min=MIN(rmin,cmin);
        if(min%2==1)
            printf("Ashish\n");
        else 
            printf("Vivek\n");
    }
}