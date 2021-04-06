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
        ll n, m;
        cin>>n>>m;
        ll a[n];
        ll sum=0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==m)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}