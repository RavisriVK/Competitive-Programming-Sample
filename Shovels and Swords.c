#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",min(min(a,b),(a+b)/3));
    }
}