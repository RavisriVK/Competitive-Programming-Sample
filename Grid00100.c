#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int in[N][2];
    int out[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&in[i][0],&in[i][1]);
        if(in[i][1]%in[i][0]==0)
            out[i]=0;
        else
            out[i]=2;
    }
    for(int i=0; i<N; i++)
    {
        printf("%d\n",out[i],in[i][0],in[i][1]);
        int a[in[i][0]][in[i][0]];
        for(int j=0; j<in[i][0]; j++)
        {
            for(int k=0; k<in[i][0]-j; k++)
            {
                if(in[i][1]>0)
                {
                    a[k][j+k]=1;
                    in[i][1]--;
                }
                else 
                {
                    a[k][j+k]=0;
                }
            }
            for(int k=0; k<j; k++)
            {
                if(in[i][1]>0)
                {
                    a[in[i][0]-j+k][k]=1;
                    in[i][1]--;
                }
                else
                {
                    a[in[i][0]-j+k][k]=0;
                }
                
            }
        }
        for(int j=0; j<in[i][0]; j++)
        {
            for(int k=0; k<in[i][0]; k++)
            {
                printf("%d",a[j][k]);
            }
            printf("\n");
        }
    }
}