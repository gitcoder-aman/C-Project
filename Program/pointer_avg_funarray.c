#include<stdio.h>
void avg(int *);
main()
{
    int arr[5],i,*ptr;
    ptr=&arr[0];
    printf("Enter element of array=");
    for(i=0;i<5;i++)
    scanf("%d",(ptr+i));
    avg(&arr[0]);
}
void avg(int *A)
{
    int sum=0,c=0,i;float AVG;
    for(i=0;i<5;i++)
    {
       if(*(A+i)>=50 &&  *(A+i)<=100)
       {
        sum=sum+*(A+i);
        c++;
       }
    }
    AVG=(float)sum/c;
    printf("\nAverage of those element =%f",AVG);
}
