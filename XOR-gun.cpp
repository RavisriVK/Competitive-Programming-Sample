#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    int x[n+1];
    x[0]=0;
    for(int i=1; i<=n; i++)
        x[i]=x[i-1]^a[i];
    
    for(int i=3; i<=n; i++) {
        if((a[i]^a[i-1])<a[i-2]) {
            cout<<"1\n";
            return 0;
        }
    }

    bool possible=false;
    int ans=2000000000;
    for(int l1=1; l1<=n; l1++) {
        for(int l2=l1; l2<=n; l2++) {
            for(int l3=l2+1; l3<=n; l3++) {
                if((x[l2]^x[l1-1])>(x[l3]^x[l2])) {
                    possible=true;
                    ans=min(ans, ((l2-l1)+(l3-l2-1)));
                }
            }
        }
    }
    if(!possible)
    cout<<"-1\n";
    else
    cout<<ans<<endl;
    
}