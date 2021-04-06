#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int alp[26]={0};
        for(int i=0; i<n; i++)
        {
            char s[1001];
            scanf("%s",s);
            int length=strlen(s);
            for(int i=0; i<length; i++)
                alp[s[i]-'a']++;
        }
        int flag=0;
        for(int i=0; i<26; i++)
            if(alp[i]%n!=0)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("YES\n");
        else 
            printf("NO\n");
    }
}