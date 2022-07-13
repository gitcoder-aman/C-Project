#include<stdio.h>
int main()
{
    int x[]={15,15,27,15,29},i,*ptr;
    float avg,s=0;
    ptr=&x[0];
    for ( i = 0; i < 5; i++)
    {
        s=s+*ptr;
        ptr++;
    }
    avg=s/5;
    printf("\nSum of all =%.2f",avg);
    return 0; 
}


