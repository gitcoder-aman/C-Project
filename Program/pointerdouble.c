#include<stdio.h>
main()
{
    int x=90,*ptr,**dptr;
    dptr=&ptr;
    ptr=&x;
    printf("\naddress=%u,value=%d",dptr,**dptr);
    printf("\naddress=%u,value=%d",*dptr,**dptr**ptr);
    printf("\naddress=%u,value=%d",&dptr,*ptr);
}
