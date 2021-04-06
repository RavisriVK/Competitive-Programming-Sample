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
        int n;
        cin>>n;
        int t[n+1]; t[0]=0;
        for(int i=1; i<=n; i++)
            cin>>t[i];
        sort(t, t+n+1);

        int dp[n+1][(n+t[n])+1];
        for(int i=0; i<=n; i++)
            for(int j=0; j<=(n+t[n]); j++)
                dp[i][j]=-1;
        for(int i=0; i<=(n+t[n]); i++)
            dp[0][i]=0;

        int ans=1000000000;
        for(int i=1; i<=n; i++) {
            for(int T=i; T<=(n+t[n]); T++) {
                dp[i][T]=dp[i-1][T-1] +  abs(T-t[i]);
                if(T>=(i+1))
                    dp[i][T]=min(dp[i][T], dp[i][T-1]);
            }
        }
        /* for(int i=0; i<=n; i++) {
            for(int j=0; j<=(n+t[n]); j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<dp[n][(n+t[n])]<<endl;
    }
}