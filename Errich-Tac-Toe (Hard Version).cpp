#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    char s[n][n+1];
    int x[3]={0};
    int y[3]={0};
    for(int i=0; i<n; i++) {
        cin>>s[i];
        for(int j=0; j<n; j++) {
            if(s[i][j]=='X')
                x[(i+j)%3]++;
            else if(s[i][j]=='O') {
                y[(i+j)%3]++;
            }
        }
    }
    int val1=0, val2=(y[1]<=y[2]?1:2);
    int t1=1, t2=(y[0]<=y[2]?0:2);
    if((x[val1]+y[val2])>(x[t1]+y[t2])) {val1=t1; val2=t2;}
    t1=2; t2=(y[0]<=y[1]?0:1);
    if((x[val1]+y[val2])>(x[t1]+y[t2])) {val1=t1; val2=t2;}

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if((i+j)%3==val1 && s[i][j]=='X')
                s[i][j]='O';
            else if((i+j)%3==val2 && s[i][j]=='O')
                s[i][j]='X';
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