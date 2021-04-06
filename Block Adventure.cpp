#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        ll n, m, k;
        cin>>n>>m>>k;
        ll a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        bool possible=true;
        for(ll i=0; i<n-1; i++) {
            if( (a[i]+m) >= (a[i+1]-k) ) {
                m+= a[i] - max((ll)0, a[i+1]-k);
            } else {
                possible=false;
                break;
            }
        }
        if(!possible) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
}