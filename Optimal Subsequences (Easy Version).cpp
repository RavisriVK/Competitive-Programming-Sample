#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if(a.first!=b.first)
        return a.first>b.first;
    else 
        return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    pair<int, int> a[n];
    int o[n];
    for(int i=0; i<n; i++) {
        cin>>a[i].first;
        o[i]=a[i].first;
        a[i].second=i+1;
    }
    sort(a, a+n, cmp);
    int m;
    cin>>m;
    for(int i=0; i<m; i++) {
        int k, pos;
        cin>>k>>pos;
        int t[k];
        for(int j=0; j<k; j++)
            t[j]=a[j].second;
        sort(t, t+k);
        cout<<o[t[pos-1]-1]<<endl;
    }
}