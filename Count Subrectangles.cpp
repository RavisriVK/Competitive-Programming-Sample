#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ZERO (long long)0

void solve(int TEST_CASE) 
{
    int n, m, k;
    cin>>n>>m>>k;
    int in;
    int st=0;
    vector<int> da;
    for(int i=1; i<=n; i++) {
        cin>>in;
        if(!in) {
            if((i-st-1)>=1)
                da.push_back(i-st-1);
            st=i;
        }
    }
    if(n-st>=1)
        da.push_back(n-st);
    sort(da.begin(), da.end());

    vector<int> db;
    st=0;
    for(int i=1; i<=m; i++) {
        cin>>in;
        if(!in) {
            if((i-st-1)>=1)
                db.push_back(i-st-1);
            st=i;
        }
    }
    if(m-st>=1)
        db.push_back(m-st);
    sort(db.begin(), db.end());

    int ans=0;
    map<int, int> fk;
    for(int i=1; i*i<=k; i++) {
        if(k%i==0 && i*i<k) {
            int p=i, q=(k/i);
            int fkp=0, fkq=0;
            //cout<<"&"<<p<<" "<<da[0]<<" "<<"0"<<" "<<da.size()<<endl;
            for(int j=0; j<da.size(); j++)
                fkp+= max(ZERO, da[j]+1-p);
            //cout<<"&"<<q<<" "<<db[0]<<" "<<"0"<<" "<<db.size()<<endl;
            for(int j=0; j<db.size(); j++)
                fkq+= max(ZERO, db[j]+1-q);
            //cout<<"#"<<(fkp*fkq)<<endl;
            ans+=fkp*fkq; fkp=0; fkq=0;
            for(int j=0; j<db.size(); j++)
                fkp+= max(ZERO, db[j]+1-p);
            for(int j=0; j<da.size(); j++)
                fkq+= max(ZERO, da[j]+1-q);
            //cout<<"#"<<(fkp*fkq)<<endl;
            ans+=fkp*fkq;
        } else if(k%i==0) {
            int fkp=0, fkq=0;
            for(int j=0; j<da.size(); j++)
                fkp+= max(ZERO, da[j]+1-i);
            for(int j=0; j<db.size(); j++)
                fkq+= max(ZERO, db[j]+1-i);
            //cout<<"#"<<(fkp*fkq)<<endl;
            ans+=fkp*fkq;
        }
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int TEST_CASE_CNT=1;
    //cin>>TEST_CASE_CNT;
    for(int TEST_CASE=1; TEST_CASE<=TEST_CASE_CNT; TEST_CASE++) 
        solve(TEST_CASE);
}