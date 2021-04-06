#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int dif(pair<int, int> a, pair<int, int> b) {
    int t1=abs(a.first-b.first);
    int t2=abs(a.second-b.second);
    return (t1+t2-1);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    pair<int, int> a[3];
    cin>>a[0].first>>a[0].second>>a[1].first>>a[1].second>>a[2].first>>a[2].second;
    sort(a, a+3);

    int plot[1001][1001]={0};
    int moves[100000][2];
    int mp=0;
    for(int i=a[0].first; i<=a[1].first; i++) {
        if(plot[i][a[0].second]!=1)
        { moves[mp][0]=i; moves[mp][1]=a[0].second; mp++; }
        plot[i][a[0].second]=1;
    }
    for(int i=a[2].first; i>=a[1].first; i--) {
        if(plot[i][a[2].second]!=1)
        { moves[mp][0]=i; moves[mp][1]=a[2].second; mp++; }
        plot[i][a[2].second]=1;
    }
    int low=min(min(a[0].second, a[1].second), a[2].second);
    int high=max(max(a[0].second, a[1].second), a[2].second);
    for(int i=a[1].second; i<=high; i++) {
        if(plot[a[1].first][i]!=1)
        { moves[mp][0]=a[1].first; moves[mp][1]=i; mp++; }
        plot[a[1].first][i]=1;
    }
    for(int i=a[1].second; i>=low; i--) {
        if(plot[a[1].first][i]!=1)
        { moves[mp][0]=a[1].first; moves[mp][1]=i; mp++; }
        plot[a[1].first][i]=1;
    }
    cout<<mp<<"\n";
    for(int i=0; i<mp; i++)
        cout<<moves[i][0]<<" "<<moves[i][1]<<endl;
}