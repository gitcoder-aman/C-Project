//Demo for accessing array element through pointer
#include<stdio.h>
main()
{
    int arr[]={12,23,34,90,50};
    int *ptr,i;
    ptr=&arr[0];
    printf("\nDisplaying all elements of array\n");
    for(i=0;i<5;i++)
    {
        printf("\naddress=%u,Value=%d ",(ptr+i),*(ptr+i));
       // ptr++;//take 4 bytes
    }
}
