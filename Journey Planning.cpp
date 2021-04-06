#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll b[n+1];
    pair<ll, ll> d[n+1];
    for(ll i=1; i<=n; i++) {
        cin>>b[i];
        d[i].first=i-b[i];
        d[i].second=b[i];
    }
    sort(d+1, d+n+1);
    ll maxB=0;

    for(ll i=1; i<=n; i++) {
        ll bval=0;
        ll dval=d[i].first;
        for( ; i<=n && d[i].first==dval; i++)
            bval+=d[i].second;
        i--;
        if(bval>maxB) {
            maxB=bval;
        }
    }
    cout<<maxB<<endl;
}