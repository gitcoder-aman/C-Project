#include<stdio.h>
main()
{
    int A[5],i,*prime,flag,j;
    prime=&A[0];
    printf("Enter element of array=");
    for(i=0;i<5;i++)
    scanf("%d",prime+i);
    printf("\ndisplay all prime no");
    for(i=0;i<5;i++)
    {
        flag=0;
      for(j=2;j<=*(prime+i)-1;j++)
    {
        if(*(prime+i)%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("\n%d is prime ",*(prime+i));
    }
}
