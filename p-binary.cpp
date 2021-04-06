#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

ll ones(ll n) {
    ll out=0;
    while(n>0) {
        out+=n%2;
        n/=2;
    }
    return out;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, p;
    cin>>n>>p;
    if(p>0) {
        ll lim=n/(p+1);
        int flag=0;
        for(ll i=1; i<=lim; i++) {
            int temp=ones((n-i*p));
            if( temp <= i) {
                cout<<i<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0) {
            cout<<"-1\n";
        }
    } else {
        for(ll i=1; true; i++) {
            ll t=n-i*p;
            ll temp=ones(t);
            if( temp <= i && temp <= t ) {
                cout<<i<<"\n";
                break;
            }
        }
    }
}