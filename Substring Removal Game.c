#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)b)-(*(int *)a);
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[101];
        scanf("%s",s);
        int length=strlen(s);
        int ones[50]={0};
        int oc=0;
        for(int i=0; i<length; i++)
        {
            if(s[i]=='1')
            {
                for(int c=s[i]; s[i]==c; i++)
                {
                    ones[oc]++;
                }
                oc++;
                i--;
            }
        }
        qsort(ones,oc,sizeof(int),cmp);
        int alice=0;
        for(int i=0; i<oc; i+=2)
            alice+=ones[i];
        printf("%d\n",alice);
    }
}