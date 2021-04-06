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
        ll n, c0, c1, h;
        cin>>n>>c0>>c1>>h;
        ll a=min(c0, c1+h);
        ll b=min(c1, h+c0);
        ll sum=0;
        char s[n+1];
        cin>>s;
        for(ll i=0; i<n; i++) {
            if(s[i]=='0') sum+=a;
            else sum+=b;
        }
        cout<<sum<<"\n";
    }
}