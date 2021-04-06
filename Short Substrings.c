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
        printf("%c",s[0]);
        for(int i=1; i<length-1; i+=2)
            printf("%c",s[i]);
        printf("%c\n",s[length-1]);
    }
}