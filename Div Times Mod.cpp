#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k;
    cin>>n>>k;
    int greatest=k-1;
    for(int i=k-1; i>=1; i--) {
        if(n%i==0) {
            greatest=i; break;
        }
    }
    int ans=n/greatest*k + greatest;
    cout<<ans<<"\n";
}