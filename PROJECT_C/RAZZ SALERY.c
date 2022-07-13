#include<stdio.h>
main()
{
    float bs,hra,ta,da,gs,ts,pf;
    printf("enter the basic salary =");
    scanf("%f",&bs);
    if(bs>25000)
    {
        hra=bs*9/100;
        da=bs*8/100;
        ta=bs*7/100;
    }
        else

       {

        hra=bs*7/100;
        da=bs*12/100;
        ta=bs*34/100;
       }
       gs=bs+hra+da+ta;


    printf("gross salary=%f",gs);

}
