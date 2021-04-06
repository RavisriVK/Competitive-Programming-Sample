#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    char s[100001];
    cin>>s;
    int n=strlen(s);
    cout<<"3\n";
    cout<<"R "<<(n-1)<<"\n";
    cout<<"L "<<n<<"\n";
    cout<<"L 2\n";
}