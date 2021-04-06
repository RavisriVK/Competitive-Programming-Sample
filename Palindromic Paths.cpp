#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
ll addMod(ll a, ll b);
ll mulMod(ll a, ll b);
ll powMod(ll a, ll b);

int main()
{
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>a[i][j];
        int diag=(n+m-1)/2, start=2, end=n+m;
        int ans=0;
        for(int d=0; d<diag; d++) {
            int z=0, o=0;
            for(int i=1; i<=n; i++) {
                if(start-i >=1 && start-i <=m) {
                    if(a[i][start-i]==0)
                        z++;
                    else 
                        o++;
                }
            }
            for(int i=1; i<=n; i++) {
                if(end-i >=1 && end-i <=m) {
                    if(a[i][end-i]==0)
                        z++;
                    else 
                        o++;
                }
            }
            ans+=min(z,o);
            start++; end--;
        }
        cout << ans << "\n";
    }
}

ll addMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a+b)%MOD;
}
ll mulMod(ll a, ll b) {
    a%=MOD; b%=MOD;
    return (a*b)%MOD;
}
ll powMod(ll a, ll b) {
    ll result=1; a%=MOD;
    while(b) {   if(b%2==1)  result*=a;     a*=a;     a%=MOD;     result%=MOD;    b/=2; }
    if(result<0) result+=MOD;
    return result;
}