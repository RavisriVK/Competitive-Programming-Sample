#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,k1,k2;
        scanf("%d %d %d",&n,&k1,&k2);
        int max=k1;
        int min=MIN(k1,k2-k1);
        char s[n+1];
        scanf("%s",s);
        int exc[n+2];
        int ep=1;
        exc[0]=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                exc[ep]=i;
                ep++;
            }
        }
        exc[ep]=n; ep++;
        int ml=0;
        for(int i=0; i<ep-1; i++)
        {
            int temp=exc[i+1]-exc[i]-1;
            if(temp%2==0) ml+=((temp/2)*(max+min));
            else ml+=max+((temp/2)*(max+min));
        }
        printf("%d\n",ml);
    }
}