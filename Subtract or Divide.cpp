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
        int moves=0;
        if(n==1) {
            moves=0;
        } else if(n==2) {
            moves=1;
        } else if(n%2==0) {
            moves=2;
        } else {
            if(n==3) {
                moves=2;
            } else {
                moves=3;
            }
        }
        cout<<moves<<"\n";
    }
}