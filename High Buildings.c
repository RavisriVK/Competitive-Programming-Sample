#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    for(int I=1; I<=N; I++)
    {
        int n,a,b,c;
        scanf("%d %d %d %d",&n,&a,&b,&c);
        if((a+b>n+c)||(c==1&&a==1&&b==1&&(n+c>a+b)))
        {
            printf("Case #%d: IMPOSSIBLE\n",I);
        }
        else
        {
            printf("Case #%d: ",I);
            int out[n];
            if(c>=2)
            {
                for(int i=0; i<a-c; i++)
                    out[i]=1;
                for(int i=0; i<c-1; i++)
                    out[a-c+i]=n;
                for(int i=0; i<(n+c-a-b); i++)
                    out[a-1+i]=1;
                out[n+c-b-1]=n;
                for(int i=0; i<b-c; i++)
                    out[n-1-i]=1;
            }
            else if(a>=2 && n>=3)
            {
                for(int i=0; i<a-2; i++)
                    out[i]=1;
                out[a-2]=n-1;
                for(int i=0; i<b-1; i++)
                    out[n-1-i]=1;
                out[n-b]=n;
                for(int i=0; i<(n+1-a-b); i++)
                    out[a-1+i]=1;
            }
            else if(b>=2 && n>=3)
            {
                for(int i=0; i<a-1; i++)
                    out[i]=1;
                out[a-1]=n;
                for(int i=0; i<b-2; i++)
                    out[n-1-i]=1;
                out[n+1-b]=n-1;
                for(int i=0; i<(n+1-a-b); i++)
                    out[a+i]=1;
            }
            else if(n==1)
            {
                out[0]=1;
            }
            else if(n==2)
            {
                if(a==1)
                {
                    out[0]=2; out[1]=1;
                }
                else
                {
                    out[0]=1; out[1]=2;
                }
            }
            for(int i=0; i<n; i++)
                printf("%d ",out[i]);
            printf("\n");
        }
    }
}