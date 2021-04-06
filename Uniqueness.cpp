#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

set<int> f;
set<int> l;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int mp=0;
    for(int i=1; i<=n && f.find(a[i])==f.end(); i++) {
        f.insert(a[i]);
        mp++;
    }
    int ans1=n-mp;
    for(int i=n; i>=1 && f.find(a[i])==f.end(); i--) {
        f.insert(a[i]);
        ans1--;
    }
    for(int i=0; i<=mp; i++) {
        f.clear();
        int temp=n-i;
        for(int j=0; j<i; j++)
            f.insert(a[j+1]);
        for(int j=n; j>=1 && f.find(a[j])==f.end(); j--) {
            f.insert(a[j]);
            temp--;
        }
        //cout<<temp<<endl;
        ans1=min(ans1, max(0, temp));
    }
    cout<<ans1<<endl;
}