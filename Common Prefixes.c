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
        int max;
        scanf("%d",&max);
        a[0]=max;
        for(int i=1; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i])
                max=a[i];
        }
        char s[max+2];
        s[max+1]='\0';
        for(int i=0; i<=max; i++)
            s[i]='a';
        printf("%s\n",s);
        for(int i=0; i<n; i++)
        {
            s[a[i]]=s[a[i]]=='a'?'b':'a';
            printf("%s\n",s);
        }
    }
}