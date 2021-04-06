#include<iostream>
#include<string.h>
#define mod(a) ((a)<0?((-1)*(a)):(a))
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char s[1000001];
        scanf("%s",s);
        int length=strlen(s);
        int a[length+1];
        a[0]=0;
        long long psum[length+1];
        for(int i=0; i<=length; i++)
            psum[i]=0;
        int pnt=1;
        int temp=0;
        for(int i=1; i<=length; i++)
        {
            a[i]=a[i-1]+(s[i-1]=='+'?1:-1);
            if(a[i]<0&&psum[mod(a[i])]==0)
            {
                psum[pnt]=i+psum[pnt-1];
                pnt++;
            }
        }
        int min=0;
        for(int i=0; i<=length; i++)
            if(min>a[i])
                min=a[i];
        if(min>=0)
        {
            printf("%d\n",length);
            continue;
        }
        long long steps=length;
        int mmin=mod(min);
        steps+=psum[mmin];
        printf("%lld\n",steps);
    }
}