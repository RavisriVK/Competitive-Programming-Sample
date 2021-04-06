#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, k;
        cin>>n>>k;
        char s[n+1];
        cin>>s;
        int w=0;
        for(int i=0; i<n; i++) 
            if(s[i]=='W') w++;
        if(k>=(n-w)) {
            int ans=2*n-1;
            ans=max(0, ans);
            cout<<ans<<"\n";
        } else if(w==1) {
            int ans=2*k+1;
            ans=max(0, ans);
            cout<<ans<<"\n";
        } else {
            int f=0;
            while(s[f]=='L') f++;
            int l=n-1;
            while(s[l]=='L') l--;
            int gaps[n][2]; int g=0;
            int sg=0;
            for(int i=f; i<=l; i++) {
                if(s[i]=='L') {
                    gaps[g][1]=i;
                    int cnt=1;
                    for(i++; i<=l && s[i]=='L'; i++)
                        cnt++;
                    i--;
                    gaps[g][0]=cnt; sg+=cnt;
                    g++;
                }
            }
            if(k>=sg) {
                int ans=2*(w+k)-1;
                ans=max(0, ans);
                cout<<ans<<"\n";
            } else {
                qsort(gaps, g, sizeof(int[2]), cmp);
                int cn=0;
                while(k>0) {
                    for(int i=gaps[cn][1]; k>0 && i<(gaps[cn][1]+gaps[cn][0]); i++) {
                        s[i]='W'; k--;
                    }
                    cn++;
                }
                int ans=0;
                for(int i=f; i<=l; i++) {
                    if(s[i]=='W') {
                        int cnt=1;
                        for(i++; i<=l && s[i]=='W'; i++)
                            cnt++;
                        i--;
                        ans+=2*cnt-1;
                    }
                }
                ans=max(0, ans);
                cout<<ans<<"\n";
            }
        }
    }
}