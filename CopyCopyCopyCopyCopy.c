#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
    return (*((int*)a))-(*((int*)b));
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int discrete=n;
        for(int i=1; i<n; i++)
            if(a[i]==a[i-1])
                discrete--;
        printf("%d\n",discrete);
    }
}