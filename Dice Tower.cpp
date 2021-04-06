#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++) {
        if(a[i]>14) {
            ll temp=a[i]%14;
            if(temp>0 && temp<7)
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        } else {
            cout<<"NO\n";
        }
    }
}