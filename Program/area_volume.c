#include<stdio.h>
void calc(int,int,float *,float *);
main()
{
    int r,h;
    float A,V;
    printf("\nenter radius and height of any cylinder");
    scanf("%d%d",&r,&h);
    calc(r,h,&A,&V);
    printf("\nTotal Surface Area=%f,volume=%f",A,V);
}
void calc(int rad,int height,float *ptr1,float *ptr2)
{
    *ptr1=2*3.14*rad*(height+rad);
    *ptr2=3.14*rad*rad*height;
}
