#include<iostream>
using namespace std;
typedef long long ll;

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
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<m-1; j++) {
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
            }
        }
        cout<<cnt<<"\n";
        for(int i=0; i<cnt; i++)
            cout<<moves[i][0]<<" "<<moves[i][1]<<" "<<moves[i][2]<<" "<<moves[i][3]<<" "<<moves[i][4]<<" "<<moves[i][5]<<"\n";
    }
}