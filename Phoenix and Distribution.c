#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(char *)a)-(*(char *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        qsort(s,n,sizeof(char),cmp);
        if(s[0]!=s[k-1]||n==k)
            printf("%c",s[k-1]);
        else if(s[k]!=s[n-1])
            for(int i=k-1; i<n; i++)
                printf("%c",s[i]);
        else
        {
            printf("%c",s[k-1]);
            int upto=(n-k)%k==0?((n-k)/k):(1+(n-k)/k);
            for(int i=0; i<upto; i++)
                printf("%c",s[k]);
        }
        printf("\n");
    }
}