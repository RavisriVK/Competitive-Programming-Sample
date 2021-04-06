#include<bits/stdc++.h>
using namespace std;
#define int long long
#define min(a, b, c) min((a), min((b), (c)))

void solve(int TEST_CASE) 
{
    int n, m;
    cin>>n>>m;
    char s[n+1][m+1];
    for(int i=1; i<=n; i++)
        cin>>(s[i]+1);
    int spruce[n+2][m+2];
    for(int i=0; i<n+2; i++)
        memset(spruce[i], 0, (m+2)*sizeof(int));

    int ans=0;
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=m; j++) {
            if(s[i][j]=='.') continue;
            spruce[i][j]=1 + min(spruce[i+1][j-1], spruce[i+1][j], spruce[i+1][j+1]);
            ans+=spruce[i][j];
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