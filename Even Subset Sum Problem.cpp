#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int> b1;
    vector<int> b2;
    for(int i=0; i<n; i++) {
        if(a[i]%2==0) {
            b1.push_back(i+1);
        } else {
            b2.push_back(i+1);
        }
    }
    if(b1.size()!=0) {
        cout<<"1\n";
        cout<<(*b1.begin())<<endl;
    } else if(b2.size()>=2) {
        cout<<"2\n";
        auto i=b2.begin();
        cout<<(*i)<<" "; i++;
        cout<<(*i)<<endl;
    } else {
        cout<<"-1\n";
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