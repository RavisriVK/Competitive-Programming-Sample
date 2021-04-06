#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[101];
        scanf("%s",s);
        int length=strlen(s);
        int f;
        for(f=0; f<length && s[f]=='0'; f++)
            ;
        int l;
        for(l=length-1; l>=0 && s[l]=='0'; l--)
            ;
        int count=0;
        for(int i=f; i<=l; i++)
            if(s[i]=='0')
                count++;
        printf("%d\n",count);
    }
}