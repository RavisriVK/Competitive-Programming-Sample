#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcdBack(ll a, ll b) {
    if(b==0) return a;
    else return gcdBack(b, a%b);
}

ll gcd(ll a, ll b) {
    return gcdBack(max(a, b), min(a, b));
}

ll lcm(ll a, ll b) {
    ll gcdAB=gcd(a, b);
    ll lcmAB= (a/gcdAB)*b;
    return lcmAB;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        ll n, m, q;
        cin>>n>>m>>q;
        ll g=gcd(n, m);
        for(ll t=0; t<q; t++) {
            ll sx, sy, ex, ey;
            cin>>sx>>sy>>ex>>ey;
            ll n1= (sx==1?n:m);
            ll n2= (ex==1?n:m);
            ll a1= (sy-1)/(n1/g);
            ll a2= (ey-1)/(n2/g);
            // double a1= ( (360.0*(sy-1.0))/n1 ) / ( (360.0/blocks) );
            // double a2= ( (360.0*(ey-1.0))/n2 ) / ( (360.0/blocks) );
            if(a1==a2) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    
}