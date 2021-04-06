#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int c[n];
        for(int i=0; i<n; i++)
            scanf("%d",&c[i]);
        int start=0, end=n-1;
        int pr=0, cu=0;
        int alice=0, bob=0, moves=0, temp;
        while(start<=end)
        {
            temp=moves;
            for(int i=start; i<=end && cu<=pr; i++)
            {
                cu+=c[i];
                alice+=c[i];
                start++;
                moves=temp+1;
            }
            pr=cu;
            cu=0;
            temp=moves;
            for(int i=end; i>=start && cu<=pr; i--)
            {
                cu+=c[i];
                //printf("<%d>",c[i]);
                bob+=c[i];
                end--;
                moves=temp+1;
            }
            //printf("\n");
            pr=cu;
            cu=0;
        }
        printf("%d %d %d\n",moves,alice,bob);
    }
}