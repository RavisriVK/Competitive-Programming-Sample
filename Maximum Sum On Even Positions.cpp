#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int main()
{
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if(i%2==0) sum+=a[i];
        }
        ll rs=0;
        ll m1=0;
        for(ll i=0; i+1<n; i+=2)
        {
            rs+=a[i+1]-a[i];
            if(rs<0)
                rs=0;
            m1=max(m1, rs);
        }

        rs=0;
        ll m2=0;
        for(ll i=1; i+1<n; i+=2) 
        {
            rs+=a[i]-a[i+1];
            if(rs<0)
                rs=0;
            m2=max(m2, rs);
        }
        cout<<(max(m2, m1) + sum)<<"\n";
    }
}

ll addMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a+b)%MOD;
}
ll mulMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a*b)%MOD;
}
ll powMod(ll a, ll b) {
    ll result=1; a%=MOD;
    while(b) {   if(b%2==1)  result*=a;     a*=a;     a%=MOD;     result%=MOD;    b/=2; }
    if(result<0) result+=MOD;
    return result;
}