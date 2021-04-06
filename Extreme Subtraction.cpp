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
        int v[n];
        for(int i=0; i<n; i++)
            cin>>v[i];
        int d[n];
        d[0]=v[0];
        int neg=0;
        for(int i=1; i<n; i++) {
            d[i]=v[i]-v[i-1];
            if(d[i]<0) neg-=d[i];
        }
        if(neg>d[0]) {cout<<"NO\n"; }
        else {cout<<"YES\n";}
    }
}

/*int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n;
        cin>>n;
        int v[n];
        for(int i=0; i<n; i++)
            cin>>v[i];
        int a[n];
        a[0]=v[0];
        int flag=0;
        for(int i=1; i<n; i++) {
            a[i]=min(v[i]-v[i-1]+a[i-1], a[i-1]);
            if(a[i]<0 || a[i]>v[i]) {
                flag=1; break;
            }
        }
        if(flag==1) cout<<"No\n"; else cout<<"Yes\n";
    }
}*/