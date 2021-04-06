#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d",&r,&c);
    getchar();
    int rowCheck[r];
    int columnCheck[c];
    int in;
    for(int i=0; i<r; i++)
        rowCheck[i]=0;
    for(int i=0; i<c; i++)
        columnCheck[i]=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            in=getchar();
            if(in=='S')
            {
                rowCheck[i]=1;
                columnCheck[j]=1;
            }
        }
        getchar();
    }
    int cc=0;
    int rc=0;
    for(int i=0; i<r; i++)
        if(rowCheck[i]==1)
            rc++;
    for(int i=0; i<c; i++)
        if(columnCheck[i]==1)
            cc++;
    printf("%d\n",r*c-rc*cc);
}
