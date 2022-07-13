#include<stdio.h>
void fun1(int,float*,float);
 main()
{
    int r;
    float A=0,cir=0;
    printf("\nenter radius of circle=");
    scanf("%d",&r);
    fun1(r,&A,cir);
    printf("\narea of circle=%f",A);
    printf("\ncircumfrence of circle=%f",cir);
}
void fun1(int rad,float *ptr,float c)
{
    *ptr=3.14*rad*rad;
    c=2*3.14*rad;
}
