#include<stdio.h>
int main()
{
    int n=5;
    int z=0;
    int i,j,k;
     int  p=0,s=1;
    
    for  (i = 1; i <= n; i++)
    {
        for(j=n-1; j>=i ; j--)
        {
            printf(" ");
        }
     
        for(k=0;k<i;k++)
        {
          if(k==0){
            printf("%c",k+65+p);
            p=p+3;}
            else
            {
                printf("%c",65+s);
                s=s+1;
            }
            
        }
        
        printf("\n");
        return 0;
    }
    
    
}

