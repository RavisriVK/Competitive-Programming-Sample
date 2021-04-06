#include<stdio.h>
#include<math.h>
#define min(a,b) ((a)<(b)?(a):(b))
int make(int n, char *s, char c)
{
    if(n==1)
    {
        if(s[0]==c)
            return 0;
        else 
            return 1;
    }
    else
    {
        int left=0, right=0;
        for(int i=0; i<n/2; i++)
            if(s[i]!=c)
                left++;
        for(int i=n/2; i<n; i++)
            if(s[i]!=c)
                right++;
        left+= make(n/2,s+n/2,c+1);
        right+= make(n/2,s,c+1);

        return min(left, right);
 
    }
    
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        printf("%d\n",make(n,s,'a'));
    }
}