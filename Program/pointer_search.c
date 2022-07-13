//Input 10 Element in Array and the Search a particular Element through pointer....
#include<stdio.h>
void search(int ,int *);
main()
{
    int A[10],i,se;
    printf("Enter Element in array=");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    search(A[i],&se);
    if(se==1)
    printf("searched Element");
    else
        printf("Not Found");
}
void search(int n,int *srh)
{
    int i,co,flag=0;
    printf("Enter do you want search Element=");
    scanf("%d",&co);
    for(i=0;i<10;i++)
    {
        if(co==n)
        flag=1;
        break;
    }
    *srh=flag;
}
