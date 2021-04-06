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
    long long n;
    scanf("%lld",&n);
    long long t1=n;
    long long t2=n;
    for(long long i=2; i*i<=n; i++) {
        if(n%i==0) {
            t1=MIN(t1,i);
            t2=MIN(t2,(n/i)-i);
        }
    }
    if(t1==n) {
        printf("%lld\n",n);
        return 0;
    }
    long long ans=t1;
    if(t2!=0) {
        ans=MIN(t1, t2);
    }
    if(ans==1) {
        printf("1\n");
        return 0;
    }
    //printf("%lld %lld\n",ans,n);
    while(n>=ans && n%ans==0) {
        n/=ans;
    }
    if(n==1) {
        printf("%lld\n",ans);
    } else {
        printf("1\n");
    }
}