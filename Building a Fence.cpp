#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, bool> pib;

bool func(int *H, int *X, int start, int end, int k) {
    int *x=X+start; int *h=H+start; int n=end+1-start;
    if(x[0]<=x[n-1]) {
        if(x[0]<=h[1])
            return false;
        for(int i=1; i<n-1; i++) {
            x[i]=min(x[i-1]-1, h[i]+k-1) + k;
            if(x[i]<=h[i+1])
                return false;
        }
        return true;
    } else {
        if(x[n-1]<=h[n-2])
            return false;
        for(int i=n-2; i>0; i--) {
            x[i]=min(x[i+1]-1, h[i]+k-1) + k;
            if(x[i]<=h[i-1])
                return false;
        }
        return true;
    }
}

void solve(int TEST_CASE) 
{
    int n, k;
    cin>>n>>k;
    int h[n];
    for(int i=0; i<n; i++)
        cin>>h[i];
    int x[n];
    x[0]=h[0]+k; x[n-1]=h[n-1]+k;
    vector<int> mix; mix.push_back(0);
    for(int i=1; i<n-1; i++) {
        if(h[i]>=h[i-1] && h[i]>=h[i+1]) {
            mix.push_back(i);
            x[i]=h[i]+k;
        } else if(h[i]<=h[i-1] && h[i]<=h[i+1]) {
            mix.push_back(i);
            x[i]=h[i]+2*k-1;
        }
    }
    mix.push_back(n-1);
    if(mix.size()==2) {
        if(func(h, x, 0, n-1, k)) 
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    } else {
        bool flag=true;
        for(int i=0; i<mix.size()-1; i++) {
            if(!func(h, x, mix[i], mix[i+1], k)) {
                flag=false;
                cout<<"NO\n";
                break;
            }
        }
        if(flag) {
            cout<<"YES\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}
