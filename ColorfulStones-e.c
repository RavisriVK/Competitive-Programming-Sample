#include<stdio.h>
#include<string.h>
int main()
{
    char seq[51];
    scanf("%s",seq);
    char ins[51];
    scanf("%s",ins);
    int seqp=0;
    int lins=strlen(ins);
    for(int i=0; i<lins; i++)
    {
        if(seq[seqp]==ins[i])
            seqp++;
    }
    printf("%d\n",seqp+1);
}