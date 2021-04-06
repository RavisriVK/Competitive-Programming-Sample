#include<iostream>
using namespace std;
typedef long long ll;

#define NOT(a) (((a)=='0')?'1':'0')

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin>>N;
    for(int TST_CASE=1; TST_CASE<=N; TST_CASE++) 
    {
        int n, m;
        cin>>n>>m;
        char a[n][m+1];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i][j]=='0') a[i][j]='1'; else a[i][j]='0';
            }
        }
        int moves[3*n*m+1][6];
        int cnt=0;
        if(n%2==1) {
            int o=(a[n-1][0]-'0'), u=(a[n-2][0]-'0'), r=(a[n-1][1]-'0'), d=(a[n-1][1]-'0');
            if(o==0) {
                moves[cnt][0]=n; moves[cnt][1]=1; moves[cnt][2]=n-1; moves[cnt][3]=1; moves[cnt][4]=n-1; moves[cnt][5]=2; cnt++;
                a[n-1][0]=NOT(a[n-1][0]); a[n-2][0]=NOT(a[n-2][0]); a[n-2][1]=NOT(a[n-2][1]);
            } 
            for(int i=1; i<m; i++) {
                if(a[n-1][i]=='0') {
                    moves[cnt][0]=n; moves[cnt][1]=i+1; moves[cnt][2]=n-1; moves[cnt][3]=i+1; moves[cnt][4]=n-1; moves[cnt][5]=i; cnt++;
                    a[n-1][i]=NOT(a[n-1][i]); a[n-2][i]=NOT(a[n-2][i]); a[n-2][i-1]=NOT(a[n-2][i-1]);
                }
            }
            n=n/2*2;
        }
        if(m%2==1) {
            int o=(a[0][m-1]-'0');
            if(o==0) {
                moves[cnt][0]=1; moves[cnt][1]=m; moves[cnt][2]=1; moves[cnt][3]=m-1; moves[cnt][4]=2; moves[cnt][5]=m-1; cnt++;
                a[0][m-1]=NOT(a[0][m-1]); a[0][m-2]=NOT(a[0][m-2]); a[1][m-2]=NOT(a[1][m-2]);
            } 
            for(int i=1; i<n; i++) {
                if(a[i][m-1]=='0') {
                    moves[cnt][0]=i+1; moves[cnt][1]=m; moves[cnt][2]=i+1; moves[cnt][3]=m-1; moves[cnt][4]=i; moves[cnt][5]=m-1; cnt++;
                    a[i][m-1]=NOT(a[i][m-1]); a[i][m-2]=NOT(a[i][m-2]); a[i-1][m-2]=NOT(a[i-1][m-2]);
                }
            }
            m=m/2*2;
        }
        for(int i=0; i<n-1; i+=2) {
            for(int j=0; j<m-1; j+=2) {
                int o=(a[i][j]-'0'), r=(a[i][j+1]-'0'), b=(a[i+1][j]-'0'), d=(a[i+1][j+1]-'0');
                if(o==0 && r==0 && b==0 && d==0) {
                    moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                    moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    moves[cnt][0]=i+1; moves[cnt][1]=j+2; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                } else if((o+r+b+d)==1) {
                    if(o==1) { moves[cnt][0]=i+1; moves[cnt][1]=j+2; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++; }
                    else if(r==1) {moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;}
                    else if(b==1) {moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;}
                    else {moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;}
                } else if((o+r+b+d)==2) {
                    if(o==1 && r==1) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                    } else if(b==1 && d==1) {
                        moves[cnt][0]=i+2; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+2; moves[cnt][4]=i+1; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    } else if(o==1 && b==1) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+1; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    } else if(r==1 && d==1) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+2; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+2; moves[cnt][4]=i+1; moves[cnt][5]=j+2; cnt++;
                    } else if(o==1 && d==1) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    } else {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                        moves[cnt][0]=i+2; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    }
                } else if((o+r+b+d)==3) {
                    if(o==0) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                    } else if(r==0) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+2; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                    } else if(b==0) {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+1; cnt++;
                        moves[cnt][0]=i+2; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    } else {
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+1; moves[cnt][3]=j+2; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+2; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+2; moves[cnt][4]=i+1; moves[cnt][5]=j+2; cnt++;
                        moves[cnt][0]=i+1; moves[cnt][1]=j+1; moves[cnt][2]=i+2; moves[cnt][3]=j+1; moves[cnt][4]=i+2; moves[cnt][5]=j+2; cnt++;
                    }
                }
                a[i][j]='1'; a[i+1][j]='1'; a[i][j+1]='1'; a[i+1][j+1]='1';
                if(j+2==m-1)
                    j--;
            }
            if(i+2==n-1)
                i--;
        }
        cout<<cnt<<"\n";
        for(int i=0; i<cnt; i++)
            cout<<moves[i][0]<<" "<<moves[i][1]<<" "<<moves[i][2]<<" "<<moves[i][3]<<" "<<moves[i][4]<<" "<<moves[i][5]<<"\n";
    }
}