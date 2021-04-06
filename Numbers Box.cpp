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
        ll n, m;
        cin>>n>>m;
        ll a[n][m];
        ll mn=101;
        ll neg=0;
        ll sum=0;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                cin>>a[i][j];
                sum+=abs(a[i][j]);
                mn=min(mn, abs(a[i][j]));
                if(a[i][j]<0) neg++;
            }
        }
        if(neg&1) sum-=2*mn;
        cout<<sum<<"\n";
    }
}