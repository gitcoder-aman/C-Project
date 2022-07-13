#include<stdio.h>
main()
{
    int A[5],i,*ptr,sum=0,count=0; float avg;
    printf("Enter element of array=");
    for(i=0;i<5;i++)
    scanf("%d",&A[i]);
ptr=&A[0];
for(i=0;i<5;i++)
{
    if(*(ptr+i)>=50 && *(ptr+i)<100)
    {
        sum=sum+*(ptr+i);
        count++;
    }
}
avg=(float)sum/count;
printf("\naverage of those Element=%f",avg);
}
