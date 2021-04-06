#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        string s;
        cin>>s;
        string out;
        while(!s.empty()) {
            if(s.length()%2==1) {
                out.push_back(s.front());
                s.erase(s.begin());
            } else {
                out.push_back(s.back());
                s.pop_back();
            }
        }
        for(int i=out.length()-1; i>=0; i--)
            cout<<out[i];
        cout<<"\n";
}