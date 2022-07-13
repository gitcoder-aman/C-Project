//count Even no in Array through pointer....
#include<stdio.h>
main()
{
    int A[10],i,*count,c=0;
    printf("Enter element of array=");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    count=&A[0];
    for(i=0;i<=9;i++)
    {
        if(*(count+i)%2==0)
            c++;
    }
    printf("\nTotal Even number in Array=%d",c);
}
