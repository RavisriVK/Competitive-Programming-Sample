#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, q;
int a[100001];
int p[100001];
vector<int> sums;

void get(int left, int right) {
    if(left>right || left<1 || right>n) return;
    int sum=p[right]-p[left-1];
    sums.push_back(sum);
    int mid= (a[right]+a[left])/2;
    int part= upper_bound(a+left, a+right+1, mid) - a;
    if(part<=right) {
        get(left, part-1);
        get(part, right);
    }
}

void solve(int TEST_CASE) 
{
    cin>>n>>q;
    sums.clear();
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1, a+n+1);
    p[0]=0;
    for(int i=1; i<=n; i++)
        p[i]=p[i-1]+a[i];
    
    get(1, n);
    sort(sums.begin(), sums.end());

    int in;
    for(int i=0; i<q; i++) {
        cin>>in;
        if(binary_search(sums.begin(), sums.end(), in)) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
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