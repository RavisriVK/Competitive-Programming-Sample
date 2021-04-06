#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(unsigned long long *)a)-(*(unsigned long long *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long x;
        scanf("%lld",&x);
        long long i=(long long)floor(log2(0.5+sqrt(0.25+2.0*x)));
        //printf("%lld\n",i);
        int steps=0;
        for(int j=1; j<=i && x>0; j++) {
            long long p4=1;
            p4=p4<<(2*j);
            long long p2=1;
            p2=p2<<j;
            long long sub=(p4-p2)/2;
            //printf("%lld %lld %lld\n",x, sub, x-sub);
            if(x-sub>=0) {
                steps++;
                x-=sub;
            } else {
                break;
            }
        }
        printf("%d\n",steps);
    }
}