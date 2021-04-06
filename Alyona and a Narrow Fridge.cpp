#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool possible(int *a, int k, int h) {
    sort(a, a+k);
    int nheight=0;
    for(int i=k-1; i>=0; i-=2) {
        nheight+=a[i];
    }
    return nheight<=h;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, h;
    cin>>n>>h;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int ans=n;
    for(int i=0; i<n; i++) {
        if(!possible(a, i+1, h)) {
            ans=i; break;
        } 
    }
    cout<<ans<<endl;
}