#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100001];
int f[100001];
int p[100001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n;
        cin>>n;
        memset(f, 0, (n+1)*sizeof(int));
        for(int i=1; i<=n; i++)
            cin>>p[i];

        int flag=1;

        a[1]=p[1];
        f[a[1]]++;

        set<int> t;
        for(int i=1; i<=n; i++) {
            t.insert(i);
        }
        t.erase(a[1]);

        for(int i=2; i<=n; i++) {
            if(p[i]>p[i-1]) {
                a[i]=p[i];
                f[a[i]]++;
                t.erase(a[i]);
            } else if(p[i]==p[i-1]) { 
                if(t.empty() || (*t.begin())>=p[i]) {
                    flag=0; break;
                } else {
                    a[i]=*t.begin();
                    t.erase(a[i]);
                }
            } else {
                flag=0; break;
            }
        }

        if(flag==0) {
            cout<<"-1\n";
        } else {
            for(int i=1; i<=n; i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
}