#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m;
    cin>>n>>m;
    ll in;
    ll ans=0;
    int position=1;
    for(ll i=0; i<m; i++) {
        cin>>in;
        ans+= ((in-position)+n)%n;
        position=in;
    }
    cout<<ans<<endl;
}