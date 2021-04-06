#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(int* &a, int* &b) {
    return a[0]<b[0];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n, m;
        cin>>n>>m;
        int c[n+1][3];
        for(int i=1; i<=n; i++)
            cin>>c[i][0]>>c[i][1]>>c[i][2];
        
        int tn=0;
        for(int i=1; i<=n; i++) {
            int l=c[i][1], h=c[i][2];
            int t=c[i][0];
            ++tn;
            c[tn][0]=t;
            for( ; i<=n && c[i][0]==t; i++) {
                l=max(l, c[i][1]);
                h=min(h, c[i][2]);
            }
            c[tn][1]=l; c[tn][2]=h;
            i--;
        }

        c[0][0]=0; c[0][1]=m; c[0][2]=m;

        /* for(int i=0; i<=tn; i++)
            cout<<c[i][0]<<" "<<c[i][1]<<" "<<c[i][2]<<endl;
        cout<<endl; */
        

        bool possible=true;
        for(int i=1; i<=tn; i++) {
            int dif=c[i][0]-c[i-1][0];
            int ln=max(c[i-1][1]-dif, c[i][1]);
            int hn=min(c[i-1][2]+dif, c[i][2]);
            if(ln>hn) {
                possible=false; break;
            } else {
                c[i][1]=ln; c[i][2]=hn;
            }
        }

        if(possible)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}