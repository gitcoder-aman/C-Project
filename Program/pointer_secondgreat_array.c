#include<stdio.h>
int main()
{
    int A[5],i,*SH,Gre,sg;
    SH=&A[0];
     for(i=0;i<5;i++)
     {
    printf("Enter element of array=");
    scanf("%d",SH+i);
     }
    Gre=0;
    sg=0;
    for(i=0;i<5;i++)
    {
    if(*(SH+i)>Gre)
        Gre=*(SH+i);
    }
    for(i=0;i<5;i++)
    {
        if(*(SH+i)>sg)
            if(*(SH+i)<Gre)
            sg=*(SH+i);
    }
    printf("Greatest Element=%d\nsecond Highest element in array=%d",Gre,sg);
    return 0;
}
