#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100000]={0};
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        a[temp-1]++;
    }
    int c4=0, c2=0;
    for(int i=0; i<100000; i++)
    {
        c4+=a[i]/4;
        c2+=(a[i]%4)/2;
    }
    int m;
    scanf("%d",&m);
    char op[2];
    for(int i=0; i<m; i++)
    {
        scanf("%s %d",op,&temp);
        if(op[0]=='+')
        {
            a[temp-1]++;
            if(a[temp-1]%4==0)
            {
                c4++;
                c2--;
            }
            else if(a[temp-1]%4==2)
            {
                c2++;
            }
        }
        else
        {
            a[temp-1]--;
            if(a[temp-1]%4==3)
            {
                c4--;
                c2++;
            }
            else if(a[temp-1]%4==1)
            {
                c2--;
            }
        }
        if(c4>=2||(c4>=1&&c2>=2))
            printf("YES\n");
        else
            printf("NO\n");
    }
}