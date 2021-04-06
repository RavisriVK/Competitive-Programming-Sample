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
        int n, k;
        cin>>n>>k;
        pair<int, int> a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i].first>>a[i].second;
        }
        int el1=a[0].first, el2=a[0].second;
        bool f1=true;
        for(int i=1; i<n; i++) {
            if(a[i].first!=el1 || a[i].second!=el2) {
                f1=false;
                break;
            }
        }
        if(f1) {
            cout<<"0\n";
            continue;
        }
        bool f2=false;
        for(int i=0; i<n; i++) {
            bool v1=true;
            for(int j=0; j<n; j++) {
                int dist= abs(a[j].first-a[i].first) + abs(a[j].second-a[i].second);
                if(dist>k) {
                    v1=false; break;
                }
            }
            if(v1) {f2=true; break;}
        }
        if(f2) {
            cout<<"1\n";
        } else {
            cout<<"-1\n";
        }
    }
}