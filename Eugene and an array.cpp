#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    ll p[n+1];
    p[0]=0;

    map<ll, int> m;
    m[0]=0;
    int start=0;
    ll ans=0;
    for(int i=1; i<=n; i++) {
        cin>>p[i];
        p[i]+=p[i-1];
        if(m.find(p[i])!=m.end() && start<=m[p[i]])
            start=m[p[i]]+1;
        ans+= i-start;
        m[p[i]]=i;
    }
    cout<<ans<<endl;
}
