#include<stdio.h>
void avg(int *,int ,int *,int);
void input(int *,int);
main()
{
    int arr1[5],arr2[8],i;
    printf("Enter element of 1st array:");
    input(&arr1[0],5);
    printf("\nEnter Element of 2nd array:");
    input(&arr2[0],8);
    avg(&arr1[0],5,&arr2[0],8);
}
void input(int *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter Element in array=");
        scanf("%d",ptr+i);
    }
}
void avg(int *ptr1,int sz1,int *ptr2,int sz2)
{
    int i,sum=0,c=0,sum1=0,c1=0;
    float AVG;
    for(i=0;i<sz1;i++)
    {
        if(*(ptr1+i)>50)
       {
        sum=sum+*(ptr1+i);
        c++;
       }
    }
    for(i=0;i<sz2;i++)
    {
        if(*(ptr2+i)>50)
       {
        sum1=sum1+*(ptr2+i);
        c1++;
       }
    }
    AVG=(float)(sum+sum1)/(c+c1);
    printf("\nAverage of array=%f",AVG);
}

