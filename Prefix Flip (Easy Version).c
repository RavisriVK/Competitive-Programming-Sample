#include<stdio.h>
int count;
int sequence(int n, char *s1, char *s2)
{
    if(n==1)
    {
        if(s1[0]!=s2[0])
        {
            printf("1 ");
            count++;
        }
        return count;
    }
    else
    {
        char s3[n+1];
        for(int i=0; i<n; i++)
            if(s2[n-1-i]=='0')
                s3[i]='1';
            else 
                s3[i]='0';
        s3[n]='\0';
        sequence(n-1,s1,s3);
        if(s1[n-1]==s2[0])
        {
            printf("%d 1 ",n);
            count+=2;
        }
        else 
        {
            printf("%d ",n);
            count++;
        }
        return count;
    }
    
}

int ssequence(int n, char *s1, char *s2)
{
    if(n==1)
    {
        if(s1[0]!=s2[0])
        {
            //printf("1 ");
            count++;
        }
        return count;
    }
    else
    {
        char s3[n+1];
        for(int i=0; i<n; i++)
            if(s2[n-1-i]=='0')
                s3[i]='1';
            else 
                s3[i]='0';
        s3[n]='\0';
        ssequence(n-1,s1,s3);
        if(s1[n-1]==s2[0])
        {
            //printf("%d 1 ",n);
            count+=2;
        }
        else 
        {
            //printf("%d ",n);
            count++;
        }
        return count;
    }
    
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {

        int n;
        scanf("%d",&n);
        char s1[n+1];
        scanf("%s",s1);
        char s2[n+1];
        scanf("%s",s2);
        //printf("     ");
        count=0;
        printf("%d ",ssequence(n,s1,s2));
        count=0;
        sequence(n,s1,s2);
        printf("\n");
    }
}