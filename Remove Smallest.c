#include<stdio.h>
#include<stdlib.h>
#define mod(a) ((a)>=0?(a):((-1)*(a)))
int cmp(const void* a, const void* b)
{
    return (*((int *)a))-(*((int *)b));
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
        int flag=0;
        for(int i=1; i<n; i++)
            if(mod(a[i]-a[i-1])>1)
            {
                flag=1;
                break;
            }
        if(flag==1)
            printf("NO\n");
        else 
            printf("YES\n");
    }
}