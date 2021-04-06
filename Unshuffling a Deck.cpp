#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void shuffle(vector<int>& a, vector<int>& order) {
    vector<int> cpy;
    for(vector<int>::iterator i=a.begin(); i!=a.end(); i++)
        cpy.push_back(a.at(i-a.begin()));
    int last=a.end()-a.begin(); int first=0;
    for(vector<int>::iterator i=order.begin(); i!=order.end(); i++) {
        int num=order.at(i-order.begin());
        for(int j=0; j<num; j++)
            a[last+j-num]=cpy[first+j];
        first+=num; last-=num;
    }
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    vector<int> c(n);
    for(int i=0; i<n; i++)
        cin>>c[i];
    vector<int> ans[n];
    int moves=0;
    for(int i=0; !is_sorted(c.begin(), c.end()) && i<n; i++) {
        int f[n+1];
        for(int j=0; j<n; j++)
            f[c[j]]=j;
        int i1, i2;
        for(int j=1; j<=n-1; j++) {
            if(f[j]>f[j+1]) {
                i1=f[j]; i2=f[j+1];
                break;
            }
        }
        int t=0;
        for(t=0; t<(i1-i2); t++)
            if(c[i2+t]!=( c[i2+t+1] - 1))
                break;
                
        if(i2>0) ans[moves].push_back(i2); ans[moves].push_back(t+1); ans[moves].push_back(i1-i2-t); if(n-i1-1 > 0) ans[moves].push_back(n-i1-1); moves++;
        shuffle(c, ans[moves-1]);
    }
    cout<<moves<<endl;
    for(int i=0; i<moves; i++) {
        cout<<ans[i].size()<<" ";
        for(int j=0; j<ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}