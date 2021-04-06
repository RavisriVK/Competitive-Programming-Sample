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
        char s[n+1];
        cin>>(s+1);
        s[0]='\0';

        int a[n];
        int high=n, low;
        for(int i=0; i<n-1; i++) {
            if(s[i+1]=='>') {
                if(s[i]!='<')
                    a[i]=high--;
                else 
                    a[i]=low++;
            } else if(s[i+1]=='<' && s[i]!='<') {
                int cnt=0;
                for(int j=i+1; j<n && s[j]=='<'; j++)
                    cnt++;
                a[i]=high-cnt;
                high-=cnt+1;
                low=high+2;
            } else {
                a[i]=low++;
            }
        }
        if(s[n-1]=='<')
            a[n-1]=low;
        else 
            a[n-1]=high;
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;

        int b[n];
        low=-1; high=1;
        b[0]=0;
        for(int i=1; i<n; i++) {
            if(s[i]=='>') {
                b[i]=low--;
            } else {
                b[i]=high++;
            }
        }
        low*=-1;
        for(int i=0; i<n; i++) {
            b[i]+=low;
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}