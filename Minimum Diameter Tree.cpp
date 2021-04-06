#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, s;
    cin>>n>>s;
    int deg[n+1]; memset(deg, 0, (n+1)*sizeof(int));
    int in1, in2;
    for(int i=0; i<n-1; i++) {
        cin>>in1>>in2;
        deg[in1]++; deg[in2]++;
    }
    int leaf=0;
    for(int i=1; i<=n; i++)
        if(deg[i]==1) leaf++;
    double ans= 2.0* ((1.0*s)/(1.0*leaf));
    printf("%.7lf\n", ans);
}