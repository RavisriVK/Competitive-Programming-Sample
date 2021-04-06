#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) 
            cin>>a[i];
        int b[n];
        for(int i=0; i<n; i++)
            cin>>b[i];
        int x=0, y=0;
        int c[n];
        for(int i=0; i<n; i++) {
            c[i]=1;
            if(a[i]==1 && b[i]==0)
                x++;
            if(a[i]==0 && b[i]==1)
                y++;
        }
        if(x==0) {
            cout<<"-1\n";
        } else {
            int dif=max(0, y-x+1);
            int cl=(dif+x-1)/(x);
            cl++;
            cout<<cl<<endl;
        }
    
}