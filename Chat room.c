#include<stdio.h>
#include<string.h>
int main()
{
    char in[101];
    scanf("%s",in);
    char sub[]="hello";
    int subp=0;
    int length=strlen(in);
    for(int i=0; i<length; i++)
    {
        if(in[i]==sub[subp])
        {
            subp++;
        }
    }
    if(subp==5)
        printf("YES\n");
    else 
        printf("NO\n");
}