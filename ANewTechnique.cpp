#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];
        int b[m][n];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>b[i][j];
        int reorder[n];
        int col;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(b[0][0]==a[i][j]) {
                    col=j;
                    break;
                }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(a[j][col]==b[0][i]) {
                    reorder[i]=j;
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cout<<a[reorder[i]][j]<<" ";
            }
            cout<<"\n";
        }
    }
}