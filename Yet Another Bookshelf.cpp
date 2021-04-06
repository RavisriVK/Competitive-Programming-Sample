#include<iostream>
#include<algorithm>
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int f=0;
        for( ; f<n && a[f]==0; f++)
            ;
        int l=n-1;
        for( ; l>=0 && a[l]==0; l--)
            ;
        int gaps=0;
        for(int i=f; i<=l; i++)
        {
            int el=a[i];
            if(el==1) continue;
            int cnt=0;
            for(; i<=l && a[i]==0; i++)
                cnt++;
            i--;
            gaps+=cnt;
        }
        cout<<gaps<<"\n";
    }
}