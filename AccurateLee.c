#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    char *out[N];
    for(int k=0; k<N; k++)
    {
        int n;
        scanf("%d",&n);
        out[k]=(char*)malloc((n+1)*sizeof(char));
        scanf("%s",out[k]);
        int i;
        for(i=0; i<n-1 && out[k][i]<=out[k][i+1]; i++)
            ;
        if(i!=n-1)
        {
            i=0;
            int zeroCount=1, oneCount=0;
            for(int j=0; j<n && out[k][j]=='0'; j++)
                zeroCount++;
            for(int j=0; n-1-j>=0 && out[k][n-1-j]=='1'; j++)
                oneCount++;
            //printf("%d %d\n",zeroCount, oneCount);
            for(int j=0; j<zeroCount; j++)
                out[k][i++]='0';
            for(int j=0; j<oneCount; j++)
                out[k][i++]='1';
            out[k][i]='\0';
            //printf("%s\n",out[k]);
        }
    }
    for(int k=0; k<N; k++)
    {
        printf("%s\n",out[k]);
        free(out[k]);
    }
}