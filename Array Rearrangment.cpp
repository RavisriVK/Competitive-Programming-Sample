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
    return ((*(int *)b))-((*(int *)a));
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int b[n];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a, a+n);
        qsort(b, n, sizeof(int), cmp);
        int flag=0;
        for(int i=0; i<n; i++) {
            if(a[i]+b[i]>x) {
                flag=1; break;
            }
        }
        if(flag==1) cout<<"No\n"; else cout<<"Yes\n";
    }
}