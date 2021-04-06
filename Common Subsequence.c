#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n, m;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int b[m];
        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);
        int flag=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
                {
                    flag=a[i];
                    j=m-1;
                    i=n-1;
                }
            }
        }
        if(flag==0)
            printf("NO\n");
        else
            printf("YES\n1 %d\n",flag);
    }
}