#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> point;

#define dist(a, b) (abs(a.first - b.first) + abs(a.second - b.second))

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int r, nd;
    cin>>r>>nd;
    int t[nd];
    point p[nd];
    int in1, in2, in3;
    int n=0;
    for(int i=0; i<nd; i++) {
        cin>>in1>>in2>>in3;
        if( (in2+in3-2) <= in1 ) {
            t[n]=in1; p[n].first=in2; p[n].second=in3; n++;
        }
    }
    if(n==0) {
        cout<<"0\n";
    } else {
        int dp[n]; dp[n-1]=1;
        int maxdp[n]; maxdp[n-1]=1;
        int ans=1;
        for(int i=n-2; i>=0; i--) {
            dp[i]=1;
            for(int j=i+1; j<n; j++) {
                if( (t[j] - t[i]) > 2*r ) {
                    dp[i]=max(dp[i], 1+maxdp[j]);
                    break;
                } else if( (t[j] - t[i])>= dist(p[i], p[j]) ) {
                    dp[i]=max(dp[i], 1+dp[j]);
                }
            }
            maxdp[i]=max(maxdp[i+1], dp[i]);
            ans=max(ans, dp[i]);
        }

        cout<<ans<<endl;
    }
}