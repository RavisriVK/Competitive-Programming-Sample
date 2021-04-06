#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

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
        char ns[20];
        scanf("%s",ns);
        int s;
        scanf("%d",&s);
        int length=strlen(ns);
        char *eptr;
        long long original=strtoll(ns,&eptr,10);
        //printf("%lld\n",original);
        int cnt=0;
        for(int j=0; j<length; j++)
            cnt+=(ns[j]-'0');
        if(cnt<=s)
        {
            printf("0\n");
            continue;
        }


        int i;
        cnt=0;
        for(i=0; i<length; i++)
        {
            cnt+=(ns[i]-'0');
            if(cnt>=s)
                break;
        }
        //printf("<%d>\n",i);
        for(int j=i; j<length; j++)
            ns[j]='0';

        double temp=pow(10.0,length-i);
        long long tp=(long long)temp;
        long long tmp=strtoll(ns,&eptr,10);
        long long ans=tp+tmp-original;
        //printf("%lld %lld %lld %lld\n%s %d\n",tp,tmp,original,ans,ns,i);
        printf("%lld\n",ans);
    }
}