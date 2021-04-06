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
        int n, m;
        cin>>n>>m;
        int a[200]; int p=0;
        for(int i=0; i<n; i++)
            cin>>a[p++];
        for(int i=0; i<m; i++)
            cin>>a[p++];
        sort(a, a+p);
        int ans=0;
        for(int i=0; i<(p-1); i++) {
            if(a[i]==a[i+1])
                ans++;
        }
        cout<<ans<<endl;
    }
}