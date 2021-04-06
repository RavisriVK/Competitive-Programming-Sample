#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll s[n];
    for(ll i=0; i<n; i++)
        cin>>s[i];
    sort(s, s+n);
    ll d[n];
    for(ll i=1; i<n; i++)
        d[i]=s[i]-s[i-1];
    d[0]=0;
    sort(d, d+n);
    ll p[n]; p[0]=d[0];
    for(int i=1; i<n; i++)
        p[i]=p[i-1]+d[i];
    ll q;
    cin>>q;
    for(ll t=0; t<q; t++) {
        ll l, r;
        cin>>l>>r;
        ll w=r+1-l;
        ll low=0, high=n;
        for(ll middle=(low+high)/2; high-low>1; middle=(low+high)/2) {
            if(w>=d[middle]) 
                low=middle;
            else 
                high=middle;
        }
        ll ans=p[low] + (n-low)*w;
        cout<<ans<<" ";
    }
    cout<<endl;
}

/* n*q solution
typedef pair<ll, bool> seg;
vector< pair<ll, bool> > a;

bool cmp(seg& a, seg& b) {
    if(a.first!=b.first)
        return a.first<b.first;
    else 
        return (!a.second) && b.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    ll s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    int q;
    cin>>q;
    for(int t=0; t<q; t++) {
        ll l, r;
        cin>>l>>r;
        for(int i=0; i<n; i++) {
            a.push_back(seg(s[i]+l, false));
            a.push_back(seg(s[i]+r, true));
        }
        sort(a.begin(), a.end(), cmp);
        ll ans=0;
        int cnt=0;
        ll start;
        for(int i=0; i<2*n; i++) {
            if(cnt==0) {
                start=a[i].first;
                //cout<<"#"<<start<<endl;
                cnt++;
            } else if(a[i].second) {
                cnt--;
                if(cnt==0) {
                    ans+= (a[i].first-start)+1;
                }
            } else {
                cnt++;
            }
        }
        cout<<ans<<" ";
        a.clear();
    }
    cout<<endl;
}
*/
