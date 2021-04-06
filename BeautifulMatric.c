#include<stdio.h>
#define mod(a) ((a)<0?((-1)*(a)):(a))
int main()
{
    int row, column;
    int temp;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&temp);
            if(temp==1)
            {
                row=i;
                column=j;
            }
        }
    }
    printf("%d\n",mod(row-2)+mod(column-2));
}