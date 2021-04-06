#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[200001];
        scanf("%s",s);
        int left, right, bit;
        int length=strlen(s);
        int min=length;
        int d[3]={0};
        for(int i=0; i<length; i++)
            d[s[i]-'1']++;
        if(d[0]==0||d[1]==0||d[2]==0)
            printf("0\n");
        else
        {
            for(int i=1; i<length-1; i++)
            {
                int left=i-1;
                right=i;
                for(bit=s[i]; i<length-1 && s[i]==bit; i++)
                    right++;
                if(bit!=s[left]&&s[left]!=s[right]&&bit!=s[right]&&min>(1+right-left))
                    min=(1+right-left);
                i--;
            }
            printf("%d\n",min);
        }
    }
}