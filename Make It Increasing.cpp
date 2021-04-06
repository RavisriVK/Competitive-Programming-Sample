#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int LIS(double* array, int start, int end, pair<double, double> range) {
    double a[(end-start)+1];
    int n=0;
    for(int i=start; i<=end; i++)
        if(array[i]>=range.first && array[i]<=range.second)
            a[++n]=array[i];

    double dp[n+1];
    for(int i=1; i<=n; i++)
        dp[i]=INFINITY;
    dp[0]=-INFINITY;

    for(int i=1; i<=n; i++) {
        int low=0, high=n+1;
        /* Find 'low' such that dp[low]<=a[i]<dp[low+1] */
        for(int middle=(low+high)/2; high-low>1; middle=(low+high)/2)
            if(a[i]>=dp[middle])
                low=middle;
            else 
                high=middle;
        if(low<n)
            dp[low+1]=a[i];
    }

    for(int i=n; i>=1; i--)
        if(dp[i]!=INFINITY)
            return i;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    int b[k+2];
    for(int i=1; i<=k; i++)
        cin>>b[i];
    b[0]=0;
    b[k+1]=n+1;

    bool possible=true;
    for(int i=2; i<=k; i++) {
        if((a[b[i]]-a[b[i-1]])<(b[i]-b[i-1])) {
            possible=false;
            break;
        }
    }
    if(!possible) {
        cout<<"-1\n";
    } else {
        double c[n+2];
        for(int i=1; i<=n; i++)
            c[i]=1.0*(a[i]-i);
        c[0]=-INFINITY;
        c[n+1]=INFINITY;

        int ansComp=k;
        for(int i=0; i<=k; i++) {
            //cout<<"#"<<(b[i])<<" "<<(b[i+1])<<" "<<(c[b[i]])<<" "<<(c[b[i+1]])<<endl;
            int temp=LIS(c, b[i]+1, b[i+1]-1, pair<double, double>(c[b[i]], c[b[i+1]]));
            ansComp+=temp;
            //cout<<"$"<<temp<<endl;
        }
        int ans=n-ansComp;
        cout<<ans<<endl;
    }
}