#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if(a.first!=b.first)
        return a.first>b.first;
    else 
        return a.second<b.second;
}

void insertionSort(int *a, int n)
{
        for(int i=1; i<n; i++) 
        {
            int insertAt=i-1;
            int low=-1, high=i;
            
            for(int middle=(low+high)/2; high-low>1; middle=(low+high)/2)
                if(a[i]<a[middle])
                    high=middle-1;
                else
                    low=middle;

            int hold=a[i];
            for(int j=i; j-low>1; j--)
                a[j]=a[j-1];
            a[low+1]=hold;
        }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    pair<int, int> a[n];
    int o[n];
    for(int i=0; i<n; i++) {
        cin>>a[i].first;
        o[i]=a[i].first;
        a[i].second=i+1;
    }
    sort(a, a+n, cmp);
    int m;
    cin>>m;
    int K[m]; int POS[m]; int mx=0;
    for(int i=0; i<m; i++) {
        cin>>K[i]>>POS[i];
        mx=max(K[i], mx);
    }
    int ans[mx+1];
    vector<int> t(n);




    for(int i=0; i<m; i++) {
        int k, pos;
        k=K[i]; pos=POS[i];
        int t[k];
        for(int j=0; j<k; j++)
            t[j]=a[j].second;
        sort(t, t+k);
        cout<<o[t[pos-1]-1]<<endl;
    }
}