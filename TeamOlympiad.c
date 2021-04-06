#include<stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))
int main()
{
    int n;
    scanf("%d",&n);
    int a[3]={0};
    int tm[n];
    int in;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&tm[i]);
        switch(tm[i])
        {
            case 1: a[0]++; break;
            case 2: a[1]++; break;
            case 3: a[2]++; break;
        }
    }
    int teams=min(min(a[1],a[0]),a[2]);
    printf("%d\n", teams);
    int la[3]={0};
    while(teams--)
    {
        for(int i=0; i<3; i++)
        {
            while(tm[la[i]]!=(i+1))
                la[i]++;
            printf("%d ",1+la[i]++);
        }
        printf("\n");
    }
}