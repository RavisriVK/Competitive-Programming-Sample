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
        char s[n+1];
        scanf("%s",s);
        int min='z';
        for(int i=0; i<n; i++)
            if(min>s[i])
                min=s[i];
        int pos[n];
        int p=0;
        char out[n+1];
        strcpy(out,s);
        int k=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==min)
            {
                char temp[n+1];
                temp[n]='\0';
                for(int j=i; j<n; j++)
                    temp[j-i]=s[j];
                if((n-i)%2==1)
                    for(int j=i-1; j>=0; j--)
                        temp[n-1-j]=s[j];
                else
                    for(int j=0; j<i; j++)
                        temp[n-i+j]=s[j];
                if(strcmp(temp,out)<0)
                {
                    k=i+1;
                    strcpy(out,temp);
                }
            }
        }
        printf("%s\n%d\n",out,k);
    }
}