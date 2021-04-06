#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
    return (*(int *)a)-(*(int *)b);
}

int cmp1(const void* a, const void* b)
{
    return ((*(const int (*)[2])b)[1])-((*(const int (*)[2])a)[1]);
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int distinct=0;
        int set[n][2];
        for(int i=0; i<n; i++)
        {
            if(i==0||a[i]!=a[i-1])
            {
                distinct++;
                set[distinct-1][1]=0;
            }
            set[distinct-1][0]=a[i];
            set[distinct-1][1]++;
        }
        //for(int i=0; i<distinct; i++)
        //    printf("%d==>%d ",set[i][0],set[i][1]);
        qsort(set,distinct,sizeof(int[2]),cmp1);
        //printf("\n%d\n",set[0][0]);
        int maxMult=set[0][1];
        int maxMin=0;
        for(int i=1; i<n && set[i][1]==maxMult; i++)
            maxMin++;
        //printf("%d, %d\n",maxMult, maxMin);
        
        maxMin+=(n-maxMult*(maxMin+1))/(maxMult-1);
        printf("%d\n",maxMin);
    }
}