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
        int oddCount=0;
        int evenCount=0;
        int temp;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&temp);
            if(temp%2==0)
                evenCount++;
            else
                oddCount++;
        }
        if(oddCount%2==1)
            printf("YES\n");
        else if(oddCount>0&&evenCount>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}