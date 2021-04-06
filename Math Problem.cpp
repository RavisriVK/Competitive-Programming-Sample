#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n;
        cin>>n;
        pair<int, int> seg[n];
        for(int i=0; i<n; i++)
            cin>>seg[i].first>>seg[i].second;
        sort(seg, seg+n);
        int l=seg[0].second;
        for(int i=1; i<n; i++) {
            if(l<seg[i].first) {
                break;
            } else if(l>seg[i].second) {
                l=seg[i].second;
            }
        }
        sort(seg, seg+n, cmp);
        int r=seg[n-1].first;
        for(int i=n-2; i>=0; i--) {
            if(r>seg[i].second) {
                break;
            } else if(r<seg[i].first) {
                r=seg[i].first;
            }
        }
        int ans=max(0, r-l);
        cout<<ans<<endl;
    }
}