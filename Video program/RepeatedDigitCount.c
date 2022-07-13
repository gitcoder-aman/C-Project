#include<stdio.h>
int LastTerm(int,int);
int LastDigit(int);
int RemoveDigit(int,int);
int main()
{
      int Input,Last_P,Temp;
      printf("Enter a Number:");
      scanf("%d",&Input);//12116544
       Last_P=LastDigit(Input);
       LastTerm(Input,Last_P);

}
int LastTerm(int Input,int Last_P)
{     

        int count=0,Reminder,retur,Store;
  
     Store=Input;
     while(Input!=0)
     {
        Reminder=Input%10; //4
        if(Reminder==Last_P)
        {
            count++;
        }
      
        Input/=10;
     } 
            if(count>=2)
             printf("\nCount of Value=%d=> Repeated %d times",Last_P,count);
             retur=RemoveDigit(Store,Last_P);
             LastDigit(retur);
           //printf("Last Value=%d",retur);
}
int LastDigit(int Input)
{
    int Last_P,retur;
    //retur=RemoveDigit(Input);
    while (Input!=0)
    {
    //printf("Value of Input=%d",Input);
    Last_P=Input%10;
    LastTerm(Input,Last_P);
    return (Last_P); //4
    }
}
int RemoveDigit(int Input_L,int Last_P)
{
    int rem,s=0,sum=0,rem1;
    while(Input_L!=0)
    {
        rem=Input_L%10;
        if(rem!=Last_P)
        {
           s=s*10+rem;
        }
        Input_L/=10;
    }
    while(s!=0)
    {
        rem1=s%10;
        sum=sum*10+rem1;
        s/=10;
    }
   // printf("Sum=%d",sum);
    return sum;
}