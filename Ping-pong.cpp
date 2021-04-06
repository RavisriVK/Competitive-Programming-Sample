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
        int x, y;
        cin>>x>>y;
        /* The maximum number of wins Alice can have is x */
        /* The maximum number of wins Bob can have is y */
        /* If x=1, Alice serves, and Bob returns the first serve. Then on, while he has stamina he serves (and this serve cannot be returned by Alice) */
        /* If Bob doesn't return any serve until Alice's stamina is 1, he will get exactly y points finally, which is the maximum possible */
        /* This will result in Alice getting x-1 points */
        /* Is it possible for Bob to force Alice to get fewer than x-1 points, while still getting y points himself? */
        /* If so, he would have to return a serve before Alice's stamina reaches 1 */
        /* If Alice returns his serve, he gets fewer than y points */
        /* But instead, Alice, can perform Bob's strategy on him, so she wins x-1 points, and Bob wins y-1 points */
        /* Either way, Bob gets fewer than y points */
        cout<<(x-1)<<" "<<(y)<<endl;

    }
}