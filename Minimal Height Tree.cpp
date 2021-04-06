#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int inc[n]; memset(inc, 0, sizeof(int)*n);
        inc[0]=1; inc[1]=1; int ip=1;

        for(int i=2; i<n; i++)
            if(a[i]>a[i-1])
                inc[ip]++;
            else 
                inc[++ip]=1;

        int h=0, p=0, toPass=1;
        while(p+toPass<=ip) {
            int t=0;
            for(int i=p+1; i<=(p+toPass); i++)
                t+=inc[i];
            p+=toPass;
            h++;
            toPass=t;
        }
        if(p+1<=ip) h++;
        cout<<h<<endl;
    }
}