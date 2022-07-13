#include<stdio.h>
#include<conio.h>
main()
{
    int i,min,N,a=2,b;
    printf("How many co-prime numbers you want to print=");
    scanf("%d",&N);
    while(N)
    {
        for(b=2;b<=a;b++)
        {
            /*code to check if a and b are co prime*/
            min=a<b?a:b;
            for(i=2;i<=min;i++)
            {
                if(a%i==0&&b%i==0)
                    break;
            }
            if(i==min+1)
            {
                printf("\n (%d, %d)",a,b);
                N--;
                if(N==0)
                    exit(0);
            }
        }
        a++;
    }
}
