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
        int n, k;
        cin>>n>>k;
        int a[n];
        int c[101]={0};
        for(int i=0; i<n; i++) {
            cin>>a[i];
            c[a[i]]++;
        }
        pair<int, int> blocks[n]; blocks[0].first=1; blocks[0].second=a[0]; int bp=0;
        for(int i=1; i<n; i++) {
            if(a[i]==a[i-1]) {
                blocks[bp].first++;
            } else {
                blocks[++bp].second=a[i];
                blocks[bp].first=1;
            }
        }
        int ans=1000000000;
        for(int cp=1; cp<=100; cp++) {
            if(c[cp]==0) continue;
            int temp=0;
            int o[n]; for(int i=0; i<n; i++) o[i]=a[i];
            for(int i=0; i<n; i++) {
                if(o[i]==cp) continue;
                int el=o[i]; int cnt=0;
                for( ; i<n && o[i]==el; i++) {
                    o[i]=cp;
                    cnt++;
                }
                while(cnt%k!=0 && i<n) {
                    cnt++;
                    o[i]=cp;
                    i++;
                }
                i--;
                temp+= (cnt+k-1)/k;
                //cout<<"#"<<temp<<endl;
            }
            //cout<<"$\n";
            ans=min(ans, temp);
        }
        cout<<ans<<endl;
    }
}