#include<stdio.h>

int find(int a[], int n, int element)
{
    for(int i=0; i<n; i++)
        if(a[i]==element)
            return 1;
    return 0;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,s,k;
        scanf("%d %d %d",&n,&s,&k);
        int badFloors[k];
        for(int i=0; i<k; i++)
            scanf("%d",&badFloors[i]);
        for(int i=0; i<=k; i++)
        {
            if(s-1+i<n&&find(badFloors,k,s+i)==0) { printf("%d\n",i); break; }
            if(s-1-i>=0&&find(badFloors,k,s-i)==0) { printf("%d\n",i); break; }
        }
    }
}