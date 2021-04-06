#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int findMax(int n, char *x, int m, char *y) {
    int dp[n+1][m+1];
    int ans=0;

    for(int i=0; i<=n; i++)
        dp[i][0]=0;

    for(int i=0; i<=m; i++)
        dp[0][i]=0;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            int temp1=max(0, max(dp[i-1][j], dp[i][j-1])-1);
            int temp2=dp[i-1][j-1]+2;
            if(x[i-1]==y[j-1]) {
                dp[i][j]=max(temp1, temp2);
            } else {
                dp[i][j]=temp1;
            }
            ans=max(ans, dp[i][j]);
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    cin>>n>>m;
    char s[n+1];
    cin>>s;
    char t[m+1];
    cin>>t;
    cout<<(findMax(n, s, m, t))<<"\n";
}