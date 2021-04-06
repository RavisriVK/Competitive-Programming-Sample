#include<stdio.h>
#include<string.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
    char s[100001];
    scanf("%s",s);
    int o1[26]={0};
    int o2[26][26]={0};
    int length=strlen(s);
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<i; j++)
            o2[j][s[i]-'a']+=o1[s[i]-'a'];
        o1[s[i]-'a']++;
    }
    int max1=0;
    for(int i=0; i<26; i++)
        max1=max(max1,o1[i]);
    int max2=0;
    for(int i=0; i<26; i++)
        for(int j=0; j<26; j++)
            max2=max(max2,o2[i][j]);
    printf("%d\n",max(max1, max2));
}