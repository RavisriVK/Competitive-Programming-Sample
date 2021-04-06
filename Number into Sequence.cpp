#include<bits/stdc++.h>
using namespace std;
#define int long long

vector< pair<int, int> > gf;

void primeFactors(int n)  
{  
    gf.clear();
    int cnt=0;
    while (n % 2 == 0)  
    {   
        cnt++;
        n = n/2;  
    } 
    gf.push_back(pair<int, int>(cnt, 2)); 
   
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        cnt=0;
        while (n % i == 0)  
        {  
            cnt++;
            n = n/i;  
        }  
        gf.push_back(pair<int, int>(cnt, i));
    }  
  
    if (n > 2)
        gf.push_back(pair<int, int>(1, n)); 
    sort(gf.begin(), gf.end());
}  

void solve(int TEST_CASE) 
{
    int n;
    cin>>n;
    primeFactors(n);
    int ans=(gf.end()-1)->first;
    cout<<ans<<endl;
    int x=(gf.end()-1)->second;
    for(int i=0; i<ans-1; i++) {
        cout<<x<<" ";
        n/=x;
    }
    cout<<n<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test_cases; cin>>test_cases;
    for(int i=1; i<=test_cases; i++) 
        solve(i);
}