#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<ll, int>& a, pair<ll, int>& b) {
    return a.first<b.first;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n; ll w;
        cin>>n>>w;
        typedef pair<ll, int> pli;
        pli a[n+1]; a[0].first=-1;
        ll p[n+1]; p[0]=0;
        int single=-1;
        for(int i=1; i<=n; i++) {
            cin>>a[i].first;
            a[i].second=i;
            if(a[i].first>=(w+1)/2 && a[i].first<=w)
                single=i;
        }
        if(single!=-1) {
            cout<<"1\n";
            cout<<single<<"\n";
            continue;
        }
        sort(a, a+n+1, cmp);
        for(int i=1; i<=n; i++)
            p[i]=p[i-1]+a[i].first;

        ll ans=-1;
        for(int i=0; i<=n && p[i]<=w; i++) {
            if(p[i]>=(w+1)/2) {
                ans=i;
                break;
            }
        }
        cout<<ans<<"\n";
        if(ans!=-1) {
            for(int i=1; i<=ans; i++)
                cout<<a[i].second<<" ";
            cout<<"\n";
        }
    }
}

