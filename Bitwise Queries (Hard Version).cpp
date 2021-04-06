#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return a.first<b.first;
}

int get(string s, int i1, int i2) {
    cout<<s<<" "<<i1<<" "<<i2<<"\n";
    cout.flush();
    int x;
    cin>>x;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int x[n+1];
    x[0]=0; x[1]=0;
    int last[n];
    memset(last, 0, n*sizeof(int));
    last[0]=1;
    int i1=-1, i2=-1;
    for(int i=2; i<=n; i++) {
        x[i]=get("XOR", 1, i);
        if(last[x[i]]!=0) {
            i1=last[x[i]];
            i2=i;
        }
        last[x[i]]=i;
    }
    int a[n+1];
    if(i1!=-1 && i2!=-1) {
        a[i1]=a[i2]=get("AND",i1, i2);
        a[1]=a[i1]^x[i1];
    } else {
        int index;
        for(index=2; index<=n; index++)
            if(x[index]==(n-1))
                break;
        int otherIndex;
        if(index!=2) otherIndex=2; else otherIndex=3;
        int aANDb=0, aXORb=x[index], bANDc=get("AND", index, otherIndex), bXORc=x[index]^x[otherIndex], cANDa=get("AND", otherIndex, 1), cXORa=x[otherIndex];
        int aSUMb=2*aANDb+aXORb, bSUMc=2*bANDc+bXORc, cSUMa=2*cANDa+cXORa;
        a[1]=((aSUMb+bSUMc+cSUMa)/2)-bSUMc;
    }
    cout<<"! "<<a[1]<<" ";
    for(int i=2; i<=n; i++)
        cout<<(a[1]^x[i])<<" ";
    cout<<"\n";
    cout.flush();
}