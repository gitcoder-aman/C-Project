#include<stdio.h>
#include<stdlib.h>
main()
{
 int i,j,a[100],size,minSum=0,minFirst,minSecond,sum=0;
 printf("Enter Size of array\n");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 minSum=a[0]+a[1];
 for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++){
   sum=a[i]+a[j];
      if(abs(minSum)>abs(sum))
      {
       minSum=sum;
        minFirst=i;
       minSecond=j;
      }
  }

 }
 printf("Sum of %d,%d gives nearest 0\n",a[minFirst],a[minSecond]);

}