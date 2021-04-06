#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool pal(char* s) {
    int m=strlen(s);
    for(int i=0; i<m/2; i++)
        if(s[i]!=s[m-1-i])
            return false;
    return true;
}

int revcmp(char *a, char *b, int m) {
    for(int i=0; i<m; i++) 
        if(a[i]!=b[m-1-i])
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        int n, m;
        cin>>n>>m;
        char s[n][m+1];
        for(int i=0; i<n; i++)
            cin>>s[i];

        int ans=0;

        vector<string> locs;
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(revcmp(s[i], s[j], m)) {
                    ans+=2;
                    locs.push_back(string(s[i]));
                    s[i][0]='\0'; s[j][0]='\0';
                    break;
                }
            }
        }

        int palLoc=-1;
        for(int i=0; i<n; i++) {
            if(s[i][0]!='\0') {
                if(pal(s[i])) {
                    palLoc=i; 
                    locs.push_back(string(s[i]));
                    ans++;
                    break;
                }
            }
        }
        cout<<(ans*m)<<endl;
        for(int i=0; i<ans/2; i++)
            cout<<locs[i];
        if(ans%2==1)
            cout<<locs[ans/2];
        for(int i=ans/2-1; i>=0; i--) {
            reverse(locs[i].begin(), locs[i].end());
            cout<<locs[i];
        }
        cout<<endl;
    
}