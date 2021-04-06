#include<iostream>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        int odd=0, even=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) even++; else odd++;
        }
        int flag=0;
        for(int i=1; i<=odd; i+=2)
            if((x-i)>=0&&(x-i)<=even)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("No\n");
        else 
            printf("Yes\n");
    }
}