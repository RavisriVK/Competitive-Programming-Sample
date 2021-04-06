#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        int n;
        cin>>n;
        char s[n+1];
        cin>>s;
        bool del[n];
        memset(del, 0, sizeof(bool)*n);
        bool considered[n];
        memset(considered, 0, n*sizeof(bool));

        int ans=0;

        for(int i=0; i<n; i++) {
            int gt=0;
            int gti=-1;
            for(int j=0; j<n; j++) {
                if(!considered[j] && s[j]>gt) {
                    gt=s[j];
                    gti=j;
                }
            }
            considered[gti]=true;
            int nxt;
            for(nxt=gti+1; nxt<n && del[nxt]; nxt++)
                ;
            int prv;
            for(prv=gti-1; prv>=0 && del[prv]; prv--)
                ;
            //cout<<"#"<<prv<<" "<<nxt;
            if( (nxt<n && s[gti]==(s[nxt]+1)) || (prv>=0 && s[gti]==(s[prv]+1)) ) {
                del[gti]=true;
                int flag=0;
                if(nxt<n ) {considered[nxt]=false; flag=1;}
                if(prv>=0) {considered[prv]=false; flag=1;}
                i-=flag;
                ans++;
                //cout<<"inc";
            }
            //cout<<endl;
        }

        cout<<ans<<endl;
    
}