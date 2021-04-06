#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    char s[n][n+1];
    int m[3]={0};
    for(int i=0; i<n; i++) {
        cin>>s[i];
        for(int j=0; j<n; j++) {
            if(s[i][j]=='X')
                m[(i+j)%3]++;
        }
    }
    int val;
    if(m[0]<=min(m[1], m[2])) val=0; else if(m[1]<=m[2]) val=1; else val=2;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if((i+j)%3==val && s[i][j]=='X')
                s[i][j]='O';
        }
        cout<<s[i]<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int TEST_CASE_CNT;
    cin>>TEST_CASE_CNT;
    for(int TEST_CASE=1; TEST_CASE<=TEST_CASE_CNT; TEST_CASE++) 
        solve(TEST_CASE);
}