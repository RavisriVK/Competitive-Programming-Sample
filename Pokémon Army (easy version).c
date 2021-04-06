#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(long long *)a)-(*(long long *)b);
}


int main()
{
    long long N;
    scanf("%lld",&N);
    while(N--)
    {
        long long n, q;
        scanf("%lld %lld",&n,&q);
        long long a[n];
        for(long long i=0; i<n; i++)
            scanf("%lld",&a[i]);
        if(n==1) {
            printf("%lld\n",a[0]);
            continue;
        }
        long long val=0;
        long long look=1;
        long long last;
        for(long long i=0; i<n; i++) {
            if(look==1) {
                if((i==0 && a[0]>a[1])||(i>0 && i<n-1 && a[i]>a[i-1] && a[i]>a[i+1])||(i==n-1 && a[n-1]>a[n-2])) {
                    look=0;
                    val+=a[i];
                }
            } else {
                if(i>0 && i<n-1 && a[i]<a[i-1] && a[i]<a[i+1]) {
                    look=1;
                    last=a[i];
                    val-=last;
                }
            }
        }
        printf("%lld\n",val);
    }
}