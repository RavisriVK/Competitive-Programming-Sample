#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tCnt;
    cin>>tCnt;
    for(int TST_CASE=1; TST_CASE<=tCnt; TST_CASE++) 
    {
        ll k;
        cin>>k;
        if(k%2==1) {
            cout<<"-1\n";
            continue;
        } 
        k-=2;
        ll n=0;
        ll num=1;
        vector<ll> ans;
        while(k>=2 && k%2==0) {
            ll kd=(k+2)/2; ll index=-1;
            while(kd>0) {kd/=2; index++;}
            k-= ((1ll)<<(index+1)) - 2;
            ans.push_back(index);
            n++;
            num+=index;
        }
        cout<<num<<endl;
        cout<<"1 ";
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<(ans[i]-1); j++) {
                cout<<"0 ";
            }
            cout<<"1 ";
        }
        cout<<endl;
        cout.flush();
    }
}
