#include<bits/stdc++.h>
using namespace std;
#define int long long

bool bal(char* s, int l, int r) {
    int o=0, c=0;
    for(int i=l; i<=r; i++) {
        if(s[i]=='(') {
            o++;
        } else {
            c++;
        }
        if(c>o) 
            return false;
    }
    return true;
}

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int ans=0;
    for(int i=0; i<n; i++) {
        int l=0, r=0;
        int original=i;
        for( ; i<n && (l!=r || (l==0 && r==0)); i++) {
            if(s[i]=='(') l++; else r++;
        }
        if(i==n && (l!=r || (l==0 && r==0))) {
            cout<<"-1\n";
            return;
        }
        i--;
        if(!bal(s, original, i)) {
            //cout<<"#"<<original<<" "<<i<<endl;
            ans+= i+1-original;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int TEST_CASE_CNT=1;
    //cin>>TEST_CASE_CNT;
    for(int TEST_CASE=1; TEST_CASE<=TEST_CASE_CNT; TEST_CASE++) 
        solve(TEST_CASE);
}