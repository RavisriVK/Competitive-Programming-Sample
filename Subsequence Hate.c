#include<stdio.h>
#include<string.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[1001];
        scanf("%s",s);
        int n=strlen(s);
        int a[n];
        for(int i=0; i<n; i++)
            a[i]=0;
        int p=0;
        int bit;
        for(int i=0; i<n; i++)
        {
            for(bit=s[i]; i<n && s[i]==bit; i++)
                a[p]++;
            p++;
            i--;
        }
        /*for(int i=0; i<p; i++)
            printf("%d ",a[i]);
        printf("\n");*/
        int min=n,t1,t2;
        for(int i=0; i<=p; i++)
        {
            t1=t2=0;
            for(int j=0; j<i; j++)
                if(j%2==0) t1+=a[j];
                else t2+=a[j];
            for(int j=i; j<p; j++)
                if(j%2==1) t1+=a[j];
                else t2+=a[j];
            //printf("->%d %d\n",t1,t2);
            min=MIN(min,MIN(t1,t2));
        }
        if(p>2)
            printf("%d\n",min);
        else 
            printf("0\n");
    }
}