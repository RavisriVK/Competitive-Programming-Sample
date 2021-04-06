#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sorted(int* a, int n) {
    for(int i=1; i<n; i++)
        if(a[i-1]>a[i])
            return (i-1);
    return n-1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        bool possible=true;
        int ans=0;
        int minIndex;
        while((minIndex=sorted(a, n))!=(n-1)) {
            int cnt=0;
            for(int i=0; i<=minIndex; i++) {
                if(a[i]>x) {
                    swap(a[i], x);
                    cnt++;
                }
            }
            if(cnt==0) {
                ans=-1; break;
            } else {
                ans+=cnt;
            }
        }
        cout<<ans<<endl;
    }
}