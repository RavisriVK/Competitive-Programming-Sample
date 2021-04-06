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
        double D, K;
        cin>>D>>K;
        if(K>D) {
            cout<<"Utkarsh\n";
            continue;
        }
        double a=1, b=1, c=0, d=1;
        int p=0;
        bool winner=true;
        while(true) {
            double t1=sqrt(a*a+b*b), t2=sqrt(c*c+d*d);
            if(K*t1>D && K*t2<=D) {
                winner= (p%2==0);
                break;
            }
            double q=a+1.0, w=b;
            c=a; d=b;
            a=min(q, w); b=max(q, w);
            p++;
        }
        if(winner) cout<<"Ashish\n"; else cout<<"Utkarsh\n";
    }
}