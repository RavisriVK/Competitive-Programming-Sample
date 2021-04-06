#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return MOD((*(long long *)b))-MOD((*(long long *)a));
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        long long neg=0;
        for(long long i=0; i<n; i++) {
            scanf("%lld",&a[i]);
            if(a[i]<0)
                neg++;
        }
        
        qsort(a, n, sizeof(long long), cmp);
        if(neg==n) {
            printf("%lld\n",a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1]);
            continue;
        }

        long long pro=a[0]*a[1]*a[2]*a[3]*a[4];
        long long ans=pro;
        for(int i=5; i<n; i++) {
            for(int j=0; j<5; j++) {
                long long temp=a[i];
                for(int k=0; k<5; k++) {
                    if(k!=j) temp*=a[k];
                }
                ans=MAX(ans, temp);
            }
        }
        printf("%lld\n",ans);
    }
}