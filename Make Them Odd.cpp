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

int cmp(const void *a, const void *b)
{
    return (((int *)a)[0])-(((int *)b)[0]);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        int a[n][2];
        for(int i=0; i<n; i++) {
            cin>>a[i][0];
            a[i][1]=0;
            while(a[i][0]%2==0) {
                a[i][0]/=2;
                a[i][1]++;
            }
        }
        qsort(a, n, sizeof(int[2]), cmp);
        int ans=0;
        for(int i=0; i<n; i++) {
            int el=a[i][0]; int mx=a[i][1];
            for( ; i<n && a[i][0]==el; i++)
                mx=max(mx, a[i][1]);
            ans+=mx;
            i--;
        }
        cout<<ans<<"\n";
    }
}