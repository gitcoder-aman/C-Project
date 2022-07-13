#include<stdio.h>
main()
{
   int A[7],i,*Great,G;
   printf("Enter element of array=");
   for(i=0;i<7;i++)
   scanf("%d",&A[i]);
   Great=&A[0];
   G=A[0];
   for(i=0;i<7;i++)
   {
      if (*(Great+i)>G)
      G= (*(Great+i));
   }
   printf("\nGreatest number in Array=%d",G);
}
