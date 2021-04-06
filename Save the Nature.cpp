#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y) {
    ll mn=min(x,y), mx=max(x,y);
    if(mn==0) return mx;
    else return gcd(mn, mx%mn);
}

ll lcm(ll x, ll y) {
    ll g=gcd(x, y);
    ll l=g*(x/g)*(y/g);
    return l;
}

bool possible(ll n, ll* p, ll x, ll a, ll y, ll b, ll k) {
    ll lab=lcm(a, b);
    ll ic=n/lab, ia=n/a, ib=n/b;
    ll tsum=0;
    for(ll i=0; i<ic; i++)
        tsum+= (p[i]/100)*(x+y);
    ll t1=tsum, t2=tsum;
    for(ll j=0; j<(ia+ib-ic-ic); j++) {
        ll i=j+ic; if(i>=n) break;
        if((i-ic)<(ia-ic))
            t1+= (p[i]/100)*x;
        else
            t1+= (p[i]/100)*y;

        if((i-ic)<(ib-ic))
            t2+= (p[i]/100)*y;
        else
            t2+= (p[i]/100)*x;
    }
    return t1>=k || t2>=k;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        ll n;
        cin>>n;
        ll p[n];
        ll sum=0;
        for(ll i=0; i<n; i++) {
            cin>>p[i];
            sum+=p[i];
        }
        ll x, a, y, b, k;
        cin>>x>>a>>y>>b>>k;

        sort(p, p+n, greater<int>());

        ll low=1, high=n;
        while(low<high) {
            ll middle=(low+high)/2;
            if(!possible(middle, p, x, a, y, b, k)) {
                low=middle+1;
            } else {
                high=middle;
            }
        }
        if(possible(low, p, x, a, y, b, k)) 
            cout<<low<<"\n";
        else
            cout<<"-1\n";
    }
}