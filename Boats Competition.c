#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))
int cmp(const void* a, const void* b)
{
    return (*((int *)a))-(*((int *)b));
}
int sums(int a[], int n, int sum)
{
    int i=0, j=n-1;
    int out=0;
    while(i<j)
    {
        if((a[i]+a[j])==sum)
        {
            out++;
            i++;
            j--;
        }
        else if((a[i]+a[j])>sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return out;
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int w[n];
        for(int i=0; i<n; i++)
            scanf("%d",&w[i]);
        qsort(w,n,sizeof(int),cmp);
        int maxTeams=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                maxTeams=max(maxTeams,sums(w,n,w[i]+w[j]));
            }
        }
        printf("%d\n",maxTeams);
    }
}