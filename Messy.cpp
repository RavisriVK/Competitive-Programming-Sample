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
        int n, k;
        cin>>n>>k;
        char s[n+1];
        cin>>s;
        int moves[2000][2]; int mp=0;
        for(int i=0; i<k-1; i++) {
            int st=2*i;
            if(s[st]==')') {
                for(int j=st+1; j<n; j++) {
                    if(s[j]=='(') {
                        moves[mp][0]=st+1; moves[mp][1]=j+1; mp++;
                        s[st]='('; s[j]=')';
                        break;
                    }
                }
            }
            st++;
            if(s[st]=='(') {
                for(int j=st+1; j<n; j++) {
                    if(s[j]==')') {
                        moves[mp][0]=st+1; moves[mp][1]=j+1; mp++;
                        s[st]=')'; s[j]='(';
                        break;
                    }
                }
            }
        }
        int rem=n-2*(k-1); rem/=2;
        for(int i=0; i<rem; i++) {
            int st=2*(k-1) + i;
            if(s[st]==')') {
                for(int j=st+1; j<n; j++) {
                    if(s[j]=='(') {
                        moves[mp][0]=st+1; moves[mp][1]=j+1; mp++;
                        s[st]='('; s[j]=')';
                        break;
                    }
                }
            }
        }

        for(int i=0; i<rem; i++) {
            int st=2*(k-1) + rem +i;
            if(s[st]=='(') {
                for(int j=st+1; j<n; j++) {
                    if(s[j]==')') {
                        moves[mp][0]=st+1; moves[mp][1]=j+1; mp++;
                        s[st]=')'; s[j]='(';
                        break;
                    }
                }
            }
        }

        cout<<mp<<"\n";
        for(int i=0; i<mp; i++)
            cout<<moves[i][0]<<" "<<moves[i][1]<<endl;
    }
}