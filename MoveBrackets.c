#include<stdio.h>

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
        int violation=0;
        int l=0,r=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
                l++;
            else 
                r++;
            if(r>l)
            {
                violation++;
                r--;
            }
        }
        printf("%d\n",violation);
    }
}