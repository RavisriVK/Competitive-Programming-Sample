#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int first;
        scanf("%d",&first);
        int ignore;
        for(int i=1; i<n-1; i++)
            scanf("%d",&ignore);
        int last;
        scanf("%d",&last);
        if(first<last)
            printf("YES\n");
        else
            printf("NO\n");
    }
}