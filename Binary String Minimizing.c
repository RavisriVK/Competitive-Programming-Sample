#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int cmp(const void *a, const void *b)
{
    return (*(int *)a)-(*(int *)b);
}


int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        long long n,k;
        scanf("%lld %lld",&n,&k);

        char s[n+1];
        scanf("%s",s);

        long long fp=0, is=1, current=0;

        while(k>0 && is==1)
        {
            while(current<n && s[current]=='1')
                current++;
            if(current>=n)
                break;

            long long moves=MIN(k, current-fp);
            moves=MAX(moves,0);

            char temp=s[current];
            s[current]=s[current-moves];
            s[current-moves]=temp;

            k-=moves;
            fp=current+1-moves;
            current++;
        }
        printf("%s\n",s);
    }
}