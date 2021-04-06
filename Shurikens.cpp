#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<char,int> > v;
    for(int i=0;i<2*n;i++)
    {
        char x;
        int y=0;
        cin>>x;
        if(x=='-')
            cin>>y;
        v.push_back(make_pair(x,y));
    }

    vector<int> ans;
    stack<int> s;
    bool possible=true;
    for(int i=2*n-1; i>=0; i--)
    {
        if(v[i].first=='-') {
            /* If this happens, it means that it is impossible to  */
            if( !s.empty() && v[i].second>s.top() ) {
                possible=false;
                break;
            }
            s.push(v[i].second);
        } else {
            /* If this happens, an element in the showcase is never bought */
            if(s.empty()) {
                possible=false;
                break;
            }
            ans.push_back(s.top());
            s.pop();
        }
    }
    reverse(ans.begin(), ans.end());
    if(!possible) {
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
