#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int e[n];
        for(int i=0; i<n; i++)
            scanf("%d",&e[i]);
        sort(e,e+n);
        int groups=0;
        int start=0, end=0;
        for(int i=0; i<n; i++)
        {
            if(e[end]==1+end-start)
            {
                groups++;
                start=end+1;
                end+=1;
            }
            else
            {
                end++;
            }
        }
        printf("%d\n",groups);
    }
}