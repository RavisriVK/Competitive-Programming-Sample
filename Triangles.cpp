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
        string s[n];
        for(int i=0; i<n; i++) 
            cin>>s[i];
        int ans[10];
        for(char d='0'; d<='9'; d++) {
            int leftmost=-1, rightmost=-1, topmost=-1, bottommost=-1;
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(s[i][j]==d) {
                        topmost=i;
                        goto l1;
                    }
                }
            }
            l1:
            for(int i=n-1; i>=0; i--) {
                for(int j=0; j<n; j++) {
                    if(s[i][j]==d) {
                        bottommost=i;
                        goto l2;
                    }
                }
            }
            l2:
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(s[j][i]==d) {
                        leftmost=i;
                        goto l3;
                    }
                }
            }
            l3:
            for(int i=n-1; i>=0; i--) {
                for(int j=0; j<n; j++) {
                    if(s[j][i]==d) {
                        rightmost=i;
                        goto l4;
                    }
                }
            }
            l4:
            //cout<<"#"<<topmost<<" "<<bottommost<<" "<<leftmost<<" "<<rightmost<<endl;
            int answer=0;
            for(int i=0; i<n; i++) {
                int l=-1, r=-1;
                for(int j=0; j<n; j++) {
                    if(s[i][j]==d) {
                        l=j; break;
                    }
                }
                for(int j=n-1; j>=0; j--) {
                    if(s[i][j]==d) {
                        r=j; break;
                    }
                }
                if(l!=-1) {
                    answer=max(answer, (r-l)*max((i), (n-1-i)) );
                    answer=max(answer, (r)*max(i-topmost, bottommost-i));
                    answer=max(answer, (n-1-l)*max(i-topmost, bottommost-i));
                }
            }
            for(int i=0; i<n; i++) {
                int t=-1, b=-1;
                for(int j=0; j<n; j++) {
                    if(s[j][i]==d) {
                        t=j; break;
                    }
                }
                for(int j=n-1; j>=0; j--) {
                    if(s[j][i]==d) {
                        b=j; break;
                    }
                }
                if(t!=-1) {
                    answer=max(answer, (b-t)*max((n-1-i), (i-0)) );
                    answer=max(answer, (b)*max((rightmost-i), (i-leftmost)) );
                    answer=max(answer, (n-1-t)*max((rightmost-i), (i-leftmost)) );
                }
            }
            ans[d-'0']=answer;
        }
        for(int i=0; i<10; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}