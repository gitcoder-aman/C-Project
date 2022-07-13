#include<stdio.h>
int count_array(int n);
main()
{
    int A[10],i,V,count=0;
    printf("enter element in array=");
    for(i=0;i<=9;i++)
    scanf("%d",&A[i]);

    for(i=0;i<=9;i++)
    {
    V=count_array(A[i]);
    if(V==1)
        count=count+1;
    }
        printf("count successfull=%d",count);

}
int count_array(int n)
{
    int i,co,flag=0;
printf("enter whose count no=");
    scanf("%d",&co);
    {
        if(co==n)
        flag=1;
    }
    return(flag);
}
