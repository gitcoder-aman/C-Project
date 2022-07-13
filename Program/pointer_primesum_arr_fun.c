#include<stdio.h>
void prime(int *);
main()
{
    int arr[5],i,*ptr,s=0;
    ptr=&arr[0];
    printf("enter Element of array=");
    for(i=0;i<5;i++)
        scanf("%d",ptr+i);
    prime(&arr[0]);
}
void prime(int *PRIME)
{
    int i,j,flag,sum=0;
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=2;j<=*(PRIME+i)-1;j++)
        {
        if(*(PRIME+i)%j==0)
        {
            flag=1;
            break;
        }
        }


    if(flag==0)
        sum=sum+*(PRIME+i);
    }
      printf("sum of prime no=%d",sum);

}

