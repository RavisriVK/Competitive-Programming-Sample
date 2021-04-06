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
        int n, p, k;
        cin>>n>>p>>k;
        char st[n+2];
        cin>>(st+1);
        int x, y;
        cin>>x>>y;
        int ans=2000000000;
        int dp[n+1-p];
        for(int s=n-p; s>max(-1, n-p-k); s--) {
            int lambda=(n-s-p)/k;
            int sum=s*y;
            for(int i=0; i<=lambda; i++) {
                if(st[p+s+i*k]=='0')
                    sum+=x;
                if(sum>ans) break;
            }
            dp[s]=sum;
            ans=min(ans, sum);
        }
        for(int s=max(-1, n-p-k); s>=0; s--) {
            int lambda=(n-s-p)/k;
            int sum=dp[s+k]-k*y;
            if(st[p+s]=='0')
                sum+=x;
            dp[s]=sum;
            ans=min(ans, sum);
        }
        cout<<ans<<endl;
    }
}