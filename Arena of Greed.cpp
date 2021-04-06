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
        long long n;
        cin>>n;
        long long ans=0;
        int turn=1;
        while(n>0) {
            //cout << "<" <<  n << ">";
            if(n%2==1 || ((n/2)%2==0 && n!=4) ) {
                n-=1;
                if(turn%2==1) ans++;
            } else {
                n/=2;
                if(turn%2==1) ans+=n;
            }
            turn++;
        }
        cout << ans << "\n";
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