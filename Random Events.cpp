#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n, m;
    cin>>n>>m;
    int a[n+1];
    int b[n+1];
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1, b+n+1);
    int end=n;
    for(int i=n; i>=1 && b[i]==a[i]; i--)
        end--;

    vector<double> prob;
    int in1; double in2;
    for(int i=0; i<m; i++) {
        cin>>in1>>in2;
        if(in1>=end)
            prob.push_back(in2);
    }
    if(end==0) {
        printf("1.0000000\n");
        return;
    } else if(prob.empty()) {
        printf("0.0000000\n");
        return;
    }
    vector<double> dp;
    dp.push_back(1.0);
    double ans=prob[0];
    for(int i=1; i<prob.size(); i++) {
        double temp=dp.back()*(1.0-prob[i-1]);
        dp.push_back(temp);
        ans+= dp.back()*prob[i];
    }
    printf("%.7lf\n", ans);
}

int32_t main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); //cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}