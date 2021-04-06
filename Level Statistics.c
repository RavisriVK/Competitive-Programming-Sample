#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1][2];
        a[0][0]=0;
        a[0][1]=0;
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&a[i][0],&a[i][1]);
            if(a[i-1][0]>a[i][0]||a[i-1][1]>a[i][1]||a[i][1]>a[i][0]||(a[i][1]-a[i-1][1])>(a[i][0]-a[i-1][0]))
                flag=1;
        }
        if(flag==0)
            printf("YES\n");
        else 
            printf("NO\n");
    }
}