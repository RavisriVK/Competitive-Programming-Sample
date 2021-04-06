#include<stdio.h>
#define mod(a) ((a)<0?((-1)*(a)):(a))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int bad0=0, bad1=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(mod(a[i]-i)%2==1)
            {    
                if(i%2==0) 
                    bad0++;
                else 
                    bad1++;
            }
        }
        if(bad0!=bad1)
            printf("-1\n");
        else 
            printf("%d\n",bad0);
    }
}