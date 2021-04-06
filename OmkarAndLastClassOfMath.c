#include<stdio.h>
#include<math.h>

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d %d\n",n/2,n/2);
        }
        else
        {
			int flag=0;
			for(int i=3; i*i<=n; i+=2)
                if(n%i==0)
                {
					flag=n/i;
                    break;
                }
			if(flag==0)
				flag=1;
			printf("%d %d\n",flag, n-flag);
        }
    }
}
