#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1001];
    scanf("%[^\n]s",s);
    int a[26]={0};
    int length=strlen(s);
    for(int i=0; i<length; i++)
    {
        if(isalpha(s[i]))
            a[(s[i]-'a')]=1;
    }
    int distinct=0;
    for(int i=0; i<26; i++)
        if(a[i]==1)
            distinct++;
    printf("%d\n",distinct);
}