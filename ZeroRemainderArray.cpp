#include<iostream>
#include<set>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n,k;
        scanf("%lld %lld",&n,&k);
        multiset<long long> a;
        long long temp;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&temp);
            if(temp%k!=0)
                a.insert(temp%k);
        }
        long long maxStep=0;
        for(multiset<long long>::iterator it=a.begin(); it!=a.end(); it=a.upper_bound(*it))
            maxStep=max(maxStep,1+k*a.count(*it)-*it);
        printf("%lld\n",maxStep);
    }
}