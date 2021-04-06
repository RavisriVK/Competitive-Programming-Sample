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

    }
}#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    int b[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>b[i][j];
    bool flag=true;
    for(int i=0; i<n; i++) {
        int s1=0, s2=0;
        for(int j=0; j<m; j++) {
            s1+=a[i][j]; s2+=b[i][j];
        }
        flag= flag && (s1%2==s2%2);
    }
    for(int i=0; i<m; i++) {
        int s1=0, s2=0;
        for(int j=0; j<n; j++) {
            s1+=a[j][i]; s2+=b[j][i];
        }
        flag= flag && (s1%2==s2%2);
    }
    if(flag)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}