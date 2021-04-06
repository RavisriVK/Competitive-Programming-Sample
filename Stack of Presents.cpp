#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<unordered_map>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

void setz(int *a, int n)
{
    memset(a, 0, n*sizeof(int));
}

int a[100001];
int b[100001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, m;
        cin>>n>>m;
        setz(a, n+1);
        setz(b, m+1);
        int in;
        for(int i=1; i<=n; i++) {
            cin>>in;
            a[in]=i;
        }
        for(int i=1; i<=m; i++)
            cin>>b[i];
        int ans=0;
        int popped=0;
        for(int i=1; i<=m; i++) {
            cout<<a[b[i]]<<"#\n";
            popped++;
            ans+=2*a[b[i]]-1;
            int j;
            for( j=1; i+j<=m && a[b[i]]>a[b[i+j]]; j++) {
                ans++;
            }
            i=i+j-1;
        }

        cout<<ans<<"\n";
    }
}