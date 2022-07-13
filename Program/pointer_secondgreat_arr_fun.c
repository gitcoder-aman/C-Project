#include<stdio.h>
void secondhighest(int *);
main()
{
    int arr[7],i,*ptr;
    ptr=&arr[0];
    for(i=0;i<7;i++)
    {    printf("\nEnter no of element[%d]=",i);
    scanf("%d",ptr+i);
    }
    secondhighest(&arr[0]);
}
void secondhighest(int *ptr)
{
    int G=0,sg=0,i;
    for(i=0;i<7;i++)
    {
        if(*(ptr+i)>G)
            G=*(ptr+i);
    }
    for(i=0;i<7;i++)
    {
        if(*(ptr+i)>sg)
            if(*(ptr+i)<G)
            sg=*(ptr+i);
    }
    printf("greatest Element=%d\nSecond Greatest Element=%d",G,sg);
}
