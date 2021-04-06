#include<stdio.h>

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
        int flag=0;
        for(int i=1; i<n-1; i++)
        {
            if(a[i-1]<a[i]&&a[i]>a[i+1])
            {
                printf("YES\n%d %d %d\n",i,i+1,i+2);
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("NO\n");
    }
}