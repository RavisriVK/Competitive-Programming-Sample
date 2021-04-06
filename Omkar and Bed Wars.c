#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

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
        char s[n+1];
        scanf("%s",s);
        int g[n];
        int gp=0;
        for(int i=0; i<n; i++)
        {
            g[gp]=0;
            for(int c=s[i]; i<n && s[i]==c; i++)
            {
                g[gp]++;
            }
            i--;
            gp++;
        }
        if(s[0]==s[n-1])
        {
            g[0]+=g[gp-1];
            gp--;
        }
        if(gp==0)
        {
            printf("%d\n",(n+2)/3);
        }
        else
        {
            int min=0;
            for(int i=0; i<gp; i++)
            {
                min+=(g[i]/3);
            }
            printf("%d\n",min);
        }
    }
}