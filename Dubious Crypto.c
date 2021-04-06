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
        long long l, r, m;
        scanf("%lld %lld %lld",&l, &r, &m);
        for(long long a=l; a<=r; a++) {
            long long n= (m+r-l)/a;
            long long dif=n*a-m;
            if(dif>=(l-r) && dif<=(r-l)) {
                if(dif>=0) {
                    printf("%lld %lld %lld\n",a,r-dif,r);
                } else {
                    printf("%lld %lld %lld\n",a,r,r+dif);
                }
                break;
            }
        }
        
    }
}