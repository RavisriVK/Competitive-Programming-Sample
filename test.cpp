#include<bits/stdc++.h>
using namespace std;
#define int long long
#define min(a, b, c) min((a), min((b), (c)))

//Assuming that s[i][j]='*'
//max_height of a spruce tree from a[i][j]= 1 + min( max_heights of spruce trees from a[i+1][j-1], a[i+1][j], a[i+1][j+1])

void solve(int TEST_CASE) 
{
    int n, m;
    cin>>n>>m;
    char s[n+1][m+1];
    for(int i=1; i<=n; i++)
        cin>>(s[i]+1);

    // dp[i][j]= the maximum height of a spruce tree starting at cell s[i][j]
    int dp[n+2][m+2];
    for(int i=0; i<=(n+1); i++)
        memset(dp[i], 0, sizeof(int)*(m+2));
    
    int ans=0;
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=m; j++) {
            if(s[i][j]!='*') continue;
            dp[i][j]=1 + min(dp[i+1][j-1], dp[i+1][j], dp[i+1][j+1]);
            ans+= dp[i][j];
        }
    }
    
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}