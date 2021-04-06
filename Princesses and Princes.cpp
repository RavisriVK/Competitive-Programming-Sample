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
        set<int> princes;
        for(int i=1; i<=n; i++) princes.insert(i);
        vector<int> plist[n];
        bool dm[n];
        bool pm[n];
        memset(dm, 0, n*sizeof(bool));
        memset(pm, 0, n*sizeof(bool));
        for(int i=0; i<n; i++) {
            int k; cin>>k;
            int in;
            for(int j=0; j<k; j++) {
                cin>>in;
                plist[i].push_back(in);
                if(!dm[i] && princes.find(in)!=princes.end()) {
                    princes.erase(in);
                    dm[i]=true;
                    pm[in-1]=true;
                }
            }
        }
        int i1, i2;
        for(i1=0; i1<n && dm[i1]; i1++)
            ;
        for(i2=0; i2<n && pm[i2]; i2++)
            ;
        if(i1==n && i2==n) {
            cout<<"OPTIMAL\n";
        } else {
            cout<<"IMPROVE\n";
            cout<<(i1+1)<<" "<<(i2+1)<<endl;
        }
    }
}