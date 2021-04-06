#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    int a[n+1];
    int f[n+1]; fill(f, f+n+1, n+1);
    int freq[n+1]; fill(freq, freq+n+1, 0);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        f[a[i]]=min(f[a[i]], i);
        freq[a[i]]++;
    }

    char s[n+2]; s[n+1]='\0';
    if(f[1]!=(n+1)) s[n]='1'; else  s[n]='0';
    bool all=true;
    for(int i=1; i<=n; i++) {
        if(f[i]>n) {
            all=false;
            break;
        }
    }
    if(all) s[1]='1'; else s[1]='0';

    int left=0, right=0;
    for(int i=1; i<=n; i++) {
        if(a[left+1]==(left+right+1)) {
            left++;
            s[n+1-left-right]='1';
            if(freq[left+right]>1) break;
        } else if(a[n-right]==(left+right+1)) {
            right++;
            s[n+1-left-right]='1';
            if(freq[left+right]>1) break;
        } else {
            break;
        }
    }
    /*cout<<"#"<<left<<" "<<right<<endl;
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;*/

    if(f[left+right+1]<=(n-right)) {
        bool extra=true;
        for(int i=left+1; i<=(n-right); i++) {
            if(a[i]<=(left+right)) {
                extra=false;
                break;
            }
        }
        if(extra) {
            s[n-left-right]='1';
            left++;
        }
    }
    for(int i=n-right-left; i>=2; i--)
        s[i]='0';
    cout<<(s+1)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int TEST_CASE_CNT;
    cin>>TEST_CASE_CNT;
    for(int TEST_CASE=1; TEST_CASE<=TEST_CASE_CNT; TEST_CASE++) 
        solve(TEST_CASE);
}