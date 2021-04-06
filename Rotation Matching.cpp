#include<iostream>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
        int n;
        scanf("%d",&n);
        int key[n];
        int keySeq[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&keySeq[i]);
            key[keySeq[i]-1]=i;
            keySeq[i]=0;
        }
        int temp;
        int dif[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&temp);
            dif[i]=(n+i-key[temp-1])%n;
            keySeq[dif[i]]++;
        }
        int maxMatch=0;
        for(int i=0; i<n; i++)
          maxMatch=MAX(maxMatch,keySeq[i]);
        printf("%d\n",maxMatch);
}