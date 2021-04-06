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
        int a[11];
        memset(a, 0, sizeof(int)*11);
        for(int i=0; i<n; i++) {
            if(s[i]=='L') {
                int j;
                for(j=1; j<=10; j++)
                    if(a[j]==0)
                        break;
                a[j]=1;
            } else if(s[i]=='R') {
                int j;
                for(j=10; j>=1; j--)
                    if(a[j]==0)
                        break;
                a[j]=1;
            } else {
                a[1+s[i]-'0']=0;
            }
        }
        for(int i=1; i<=10; i++)
            cout<<a[i];
        cout<<endl;
    
}