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
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int b[n], d[n];
    for(int i=0; i<n; i++)
        cin>>b[i]>>d[i];
    sort(b,b+n);
    sort(d,d+n);
    int nd=0;
    int p=0;
    int maxp=0, y=0;
    for(int i=0; i<n; i++) {
        if(b[i]<d[nd]) {
            p++;
            if(maxp<p) {
                maxp=p;
                y=i;
            }
        } else {
            p++;
            while(b[i]>=d[nd]) {
                nd++;
                p--;
            }
        }
    }
    cout<<b[y]<<" "<<maxp<<"\n";
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