#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tCnt;
    cin>>tCnt;
    for(int TST_CASE=1; TST_CASE<=tCnt; TST_CASE++) 
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
            cin>>a[i];
        int b[n+1];
        for(int i=1; i<=n; i++)
            cin>>b[i];
        int zero[n+1]; int neg[n+1]; int ones[n+1];
        zero[0]=neg[0]=ones[0]=0;
        for(int i=1; i<=n; i++) {
            zero[i]=zero[i-1];
            ones[i]=ones[i-1];
            neg[i]=neg[i-1];
            if(a[i]==0) {
                zero[i]++;
            }else if(a[i]==1) {
                ones[i]++;
            } else {
                neg[i]++;
            }
        }

        bool flag=true;
        for(int i=n; i>=1; i--) {
            int dif=b[i]-a[i];
            if( (dif>0 && ones[i-1]==0) || (dif<0 && neg[i-1]==0)) {
                flag=false;
                break;
            }
        }
        if(flag) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}