#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i,*ptr,modi,flag=0;
    printf("Enter size of array=");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nEnter no of element=");
        scanf("%d",ptr+i);
    }
    printf("\nEnter Element Which you want to modify=");
    scanf("%d",&modi);
    for(i=0;i<n;i++)
    {
        if(modi==*(ptr+i))
        {
            flag=1;
            printf("\nEnter New Element=");
            scanf("%d",ptr+i);
            break;
        }
    }
    if(flag==0)
        printf("\nElement does not exit:");
    else
        printf("\nafter modify:");
    for(i=0;i<n;i++)
        printf("\n%d",*(ptr+i));
}
