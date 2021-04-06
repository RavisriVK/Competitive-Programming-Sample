#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

#define NOT(a) ('0' + !((a)-'0'))

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int LAMBDA=1; LAMBDA<=N; LAMBDA++) 
    {
        int n;
        cin>>n;
        char s[n][n+1];
        for(int i=0; i<n; i++)
            cin>>s[i];
        int moves[2][2];
        int cnt=0;
        if(s[0][1]==s[1][0]) {
            if(s[n-2][n-1]==s[0][1]) {
                moves[cnt][0]=n-1; moves[cnt][1]=n;
                cnt++;
            }
            if(s[n-1][n-2]==s[0][1]) {
                moves[cnt][0]=n; moves[cnt][1]=n-1;
                cnt++;
            }
        }
        else
        {
            if(s[n-1][n-2]==NOT(s[0][1]) || s[n-2][n-1]==NOT(s[0][1]) ) {
                if(s[1][0]!=s[0][1]) {
                    moves[cnt][0]=2; moves[cnt][1]=1; cnt++;
                }
                if(s[n-1][n-2]==s[0][1]) {
                    moves[cnt][0]=n; moves[cnt][1]=n-1; cnt++;
                } 
                if(s[n-2][n-1]==s[0][1]) {
                    moves[cnt][0]=n-1; moves[cnt][1]=n; cnt++;
                } 
            }
            else
            {
                moves[cnt][0]=1; moves[cnt][1]=2; cnt++;
            }
            
        }
        cout<<cnt<<"\n";
        for(int i=0; i<cnt; i++)
            cout<<moves[i][0]<<" "<<moves[i][1]<<"\n";
        
    }
}