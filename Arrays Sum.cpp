#include <iostream>
#include <set>

using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MOD(a) ((a)<0?((-1)*(a)):(a))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n, k;
        scanf("%lld %lld",&n,&k);
        set <long long> s;
        long long in;
        for(long long i=0; i<n; i++) {
            cin >> in;
            s.insert(in);
        }
        long long d=s.size();
        if(k==1 ) {
            if(d==1) {
                printf("1\n"); continue;
            } else {
                printf("-1\n"); continue;
            }
        }
        long long ans=(d-1)/(k-1);
        if((d-1)%(k-1)!=0) ans+=1;
        printf("%lld\n", MAX(1,ans));
    }
}