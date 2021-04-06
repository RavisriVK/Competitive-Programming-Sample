#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    char s[n][n+1];
    for(int i=0; i<n; i++)
        cin>>s[i];
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j]=s[i][j]-'0';
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                if(a[j][i]!=0 && a[i][k]!=0)
                    a[j][k]= (a[j][k]!=0? min(a[j][k], a[j][i]+a[i][k]): (a[j][i]+a[i][k]));
    for(int i=0; i<n; i++)
        a[i][i]=0;
    //for(int i=0; i<n; i++) {
    //    for(int j=0; j<n; j++) {
    //        cout<<a[i][j]<<" ";
    //    }
    //    cout<<"\n";
    //}
    int m;
    cin>>m;
    int in;
    cin>>in;
    vector<int> ans;
    ans.push_back(in);
    cin>>in;
    ans.push_back(in);
    int l=1;
    for(int i=3; i<=m; i++)
    {
        cin>>in;
        if( (a[ans[l-1]-1][ans[l]-1] + a[ans[l]-1][in-1])==a[ans[l-1]-1][in-1] )
        {
            ans.pop_back();
            ans.push_back(in);
        }
        else
        {
            ans.push_back(in);
            l++;
        }
        
    }
    cout<<(l+1)<<"\n";
    for(int i=0; i<=l; i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}