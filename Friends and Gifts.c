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
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int s[n];
        int r[n];
        for(int i=0; i<n; i++)
            r[n]=0;
        int u=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
            r[s[i]-1]=i+1;
            if(s[i]==0)
                u++;
        }
        int ar[n];
        int ap=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==0&&r[i]==0)
            {
                ar[ap]=i+1;
                ap++;
            }
        }
        if(ap==1)
        {
            for(int t=0; t<n; t++)
            {
                if(t!=(ar[0]-1)&&r[t]==0)
                {
                    s[ar[0]-1]=t+1;
                    r[t]=ar[0];
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<ap; i++)
            {
                s[ar[i]-1]=ar[(i+1)%ap];
                r[ar[(i+1)%ap]-1]=ar[i];
            }
        }
        int p1=0, p2=0;
        while(p1<n && p2<n)
        {
            while(p1<n && s[p1]!=0)
                p1++;
            while(p2<n && r[p2]!=0)
                p2++;
            if(p1<n)
            {
                s[p1]=p2+1;
                r[p2]=p1+1;
            }
            p1++;
            p2++;
        }
        for(int i=0; i<n; i++)
            printf("%d ",s[i]);
        printf("\n");
    }
}