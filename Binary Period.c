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
        char a[201];
        int ap=0;
        int z=0,o=0;
        for(int i=0; i<length; i++)
        {
            if(s[i]=='0') z++; else o++;
            if(s[i]=='1'&&(i<length-1)&&s[i+1]=='1')
            {
                a[ap]='1'; a[ap+1]='0';
                ap+=2;
            }
            else if(s[i]=='0'&&(i<length-1)&&s[i+1]=='0')
            {
                a[ap]='0'; a[ap+1]='1';
                ap+=2;
            }
            else
            {
                a[ap]=s[i]; ap++;
            }
            
        }
        a[ap]='\0';
        if(length==z||length==o)
            printf("%s\n",s);
        else 
            printf("%s\n",a);
    }
}