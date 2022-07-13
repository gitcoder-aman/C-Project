#include<stdio.h>
int search_array(int n);
main()
{
    int A[10],i,V;
    printf("enter element of array=");
    for(i=0;i<=9;i++)
    scanf("%d",&A[i]);
    V=search_array(A[i]);
    if(V==1)
        printf("\nElement Exit:");
    else
        printf("\nelement Not Exit:");
}
int search_array(int n)
{
    int se,i,flag=0;
   printf("enter Searching Element=");
    scanf("%d",&se);
    for(i=0;i<=9;i++)
    {
        if(se==n)
            flag=1;
        break;
    }
    return(flag);
}
