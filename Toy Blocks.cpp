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
        int n;
        cin>>n;
        ll a[n];
        ll mx=0; ll sum=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
            mx=max(mx, a[i]);
        }
        ll t=(n-1)*mx;
        ll ans=0;
        if(sum<=t) {
            ans=t-sum;
        } else {
            ans= ((sum + n - 2)/(n-1))*(n-1);
            ans-=sum;
        }
        cout<<ans<<"\n";
    }
}