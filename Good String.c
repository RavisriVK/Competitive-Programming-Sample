#include<stdio.h>
#include<string.h>
#define max(a,b) ((a)>(b)?(a):(b))
int maxSeq(int length, char *s, char x, char y)
{
    int i=-1;
    int flag=0;
    while(i<length)
    {
        for(i++; i<length && s[i]!=x; i++)
            ;
        for(i++; i<length && s[i]!=y; i++)
            ;
        if(i>=length)
            break;
        flag++;
    }
    return 2*flag;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[200001];
        scanf("%s",s);
        int length=strlen(s);
        int maxLength=0;
        for(int i='0'; i<='9'; i++)
        {
            for(int j='0'; j<='9'; j++)
            {
                int val=0;
                int x=i;
                for(int k=0; k<length; k++)
                {
                    if(s[k]==x)
                    {
                        x=x==i?j:i;
                        val++;
                    }
                }
                if(i!=j)
                    val=val/2*2;
                maxLength=max(maxLength,val);
            }
        }
        printf("%d\n",length-maxLength);
    }
}