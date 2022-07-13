#include<stdio.h>
main()
{
    int A[10],i,*se,flag=0,S;
    printf("Enter element of array=");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    se=&A[0];//address asign
    printf("Enter Search for element=");
    scanf("%d",&S);
    for(i=0;i<10;i++)
    {
    if(*(se+i)==S)
    {
        flag=1;
    printf("\nSearched Element:");
    break;
    }
    }
    if(flag==0)
        printf("\nElement is not Found in array..");
}
