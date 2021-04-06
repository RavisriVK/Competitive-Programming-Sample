#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int a,b,c,n;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        if(b>c)
        {
            int temp=b;
            b=c;
            c=temp;
        }
        if(n>=((c-a)+(c-b))&&(n-(c-a)-(c-b))%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}