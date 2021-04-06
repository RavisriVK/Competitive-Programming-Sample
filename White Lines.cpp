#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int l[2002][2002]={0};
int r[2002][2002]={0};
int u[2002][2002]={0};
int d[2002][2002]={0};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k;
    cin>>n>>k;
    char s[n+1][n+1];
    for(int i=1; i<=n; i++)
        cin>>s[i];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            l[i][j]= l[i][j-1] + ((s[i][j]=='W')?1:0) ;
            r[i][n+1-j]= r[i][n+2-j] + ((s[i][n+1-j]=='W')?1:0) ;
            u[i][j]= u[i-1][j] + ((s[i][j]=='W')?1:0) ;
            d[n+1-i][j]= d[n+2-i][j] + ((s[n+1-i][j]=='W')?1:0) ;
        }
    }
    bool dp1[n+1][n+2-k];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n+1-k); j++) {
            dp1[i][j]= (l[i][j-1]==(j-1)) && (r[i][j+k]==(n+1-j-k));
        }
    }

    bool dp2[n+2-k][n+1];
    for(int i=1; i<=(n+1-k); i++) {
        for(int j=1; j<=n; j++) {
            dp2[i][j]= (u[i-1][j]==(i-1)) && (d[i+k][j]==(n+1-i-k));
        }
    }

    bool dp[n+2-k][n+2-k];
    int t1=0; for(int i=1; i<=k; i++) t1+=dp1[i][1];
    int t2=0; for(int i=1; i<=k; i++) t2+=dp2[1][i];
    for(int i=1; i<=(n+1-k); i++) {
        for(int j=1; j<=(n+1-k); j++) {
            dp[i][j]=t1+t2;
            
        }
    }

    int maxInc=0;
    for(int i=1; i<=(n+1-k); i++) {
        for(int j=1; j<=(n+1-k); j++) {

        }
    }
}