#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        int n, m, k;
        cin>>n>>m>>k;
        int in1, in2;
        for(int i=0; i<2*k; i++)
            cin>>in1>>in2;

        char s[2*n*m+1]; int p=0;
        for(int i=0; i<m-1; i++) 
            s[p++]='L';
        for(int i=0; i<n-1; i++)
            s[p++]='U';
        int x=0, y=0; int lr=1;
        while((x>=0 && x<n) && (y>=0 && y<m)) {
            if(lr==1) {
                if(y!=(m-1)) {
                    y++;
                    s[p++]='R';
                } else {
                    x++;
                    s[p++]='D';
                    lr=0;
                }
            } else {
                if(y!=0) {
                    y--;
                    s[p++]='L';
                } else {
                    x++;
                    s[p++]='D';
                    lr=1;
                }
            }
        }
        s[p]='\0';
        cout<<p<<endl;
        if(p!=0)
            cout<<s<<endl;
    
}