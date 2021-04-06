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
    char s[1001];
    scanf("%s",s);
    int n=strlen(s);
    int mark[n];
    for(int i=0; i<n; i++)
        mark[i]=0;
    int l, r;
    for(l=0; l<n && s[l]!='('; l++)
        ;
    for(r=n-1; r>=0 && s[r]!=')'; r--)
        ;
    int moves=0;
    while(l<r)
    {
        mark[l]=1;
        mark[r]=1;
        moves++;
        for(l+=1; l<n && s[l]!='('; l++)
            ;
        for(r-=1; r>=0 && s[r]!=')'; r--)
            ;
    }
    if(moves==0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n%d\n",2*moves);
        for(int i=0; i<n; i++)
            if(mark[i]==1)
                printf("%d ",i+1);
        printf("\n");
    }
}