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
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int flag=0;
        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(a[j]==a[i]) {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<"YES\n"; else cout<<"NO\n";
    }
}