#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        ll n, s;
        cin>>n>>s;
        ll a[n+1]; a[0]=0;
        ll sum[n+1]; sum[0]=0;
        ll mx[n+1]; mx[0]=0;
        for(ll i=1; i<=n; i++) {
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
            if(a[i]>a[mx[i-1]])
                mx[i]=i;
            else 
                mx[i]=mx[i-1];
        }
        if(sum[n]<=s) {
            cout<<"0\n";
            continue;
        }
        ll i;
        for(i=1; i<=n && (sum[i]-a[mx[i]])<=s; i++)
            ;
        cout<<(mx[i-1])<<"\n";
    }
}