//To Find The Greatest Element in the Given 7 Elemnets of array through pointer....
#include<stdio.h>
void greatest(int ,int *);
main()
{
    int A[7],i,G=0;
    printf("Enter any Element of Array=");
    for(i=0;i<7;i++)
        scanf("%d",&A[i]);
    greatest(A[i],&G);
    printf("greatest element in array=%d",G);
}
void greatest(int n,int *Gre)
{
    int i,G=0;
    for(i=0;i<7;i++)
    {
        if(G<n)
            G=n;
    }
    *Gre=G;
}
