/*1) Write a Program to Find GCD or HCF of two numbers
   entered by user
2) Write a Program to Find LCM of two numbers entered
   by user
3) Write a Program to Display all Factors of a Number
   entered by User
4) Hollow Rectangular star
* * * * *
*      *
* * * * *
5) Hollow Full Pyramid Star
               *
			  * *
			 *   *
			*     *
		   ***********
		   
7) Write a Program to Display Prime Numbers Between Two
   Intervals (entered by the user) Using Functions
   
8) Write a Program to check if an integer (entered by the user)
   can be expressed as the sum of two prime numbers,if yes then
   print all possible combinations with the use of functions.
   Example
   Enter a positive integer: 34   // 3,5,7,11,13,17,19,23,29,31 Prime
   OUTPUT:
   34 = 3 + 31       
   34 = 5 + 29
   34 = 11 + 23
   34 = 17 + 17
   
9) Write a Program to Convert Binary Number to Decimal
   manually by creating user-defined functions.
  

10) Write a Program to Convert Decimal to Binary number
    manually by creating user-defined functions.
	
11) Write a Program to Calculate Factorial of a Number Using
    Recursion
12) Write a Program to Find G.C.D of two numbers entered by
    user Using Recursion
	
13) Write a Program that takes n element from user and displays
    the largest element of an array
14) Write a Program that calculates the standard deviation of 10
    data using arrays
	
15) Write a Program that takes the array of five element and the
    elements of that array are accessed using pointer.

16) Write a Program that adds two matrices using Multidimensional Arrays where the number of rows r and columns c is
    entered by user (Value of r and c < 100)

17) Write a Program takes two matrices of order r1*c1 and r2*c2
    respectively. Then, the program multiplies these two matrices (if
    possible) and displays it on the screen.
	
18) Write a Program that takes a matrix of order r*c from the user
    and computes the transpose of the matrix.

19)  Write a Program that takes three integers from the user and
     swaps them in cyclic order using pointers.
     Example:
     Enter value of a, b and c respectively:1 2 3
     Value after swapping numbers in cycle:
     a=3
     b=1
     c=2
20)  Write a Program to Find the Frequency of given Character by
     user in a String
	 
21)  Write a Program to Remove all Characters in a String Except
     Alphabets.
     Example:
     Enter a string: p2'r"o@gram84iz./
     Output String: programiz
	 
21)  Write a Program to Concatenate (join) Two Strings entered
     by user
	 
22)  Write a C++ program to change every letter in a given string
     with the letter following it in the alphabet (ie. a becomes b, p
     becomes q, z becomes a).
     Example:
     Sample Input: Abcdef3
     Sample Output: Bcdefg3
	 
23)  Write a C++ program to count all the words in a given
     string.Words must be separated by only one space
     Example:
     Sample Input: Siddharth Singh
     Sample Output: number of words -> 2
	 
24)  Write a C++ program to capitalize the first letter of each
     word of a given string. Words must be separated by only one
     space
     Example:
     Sample Input: cpp string exercises
     Sample Output: Cpp String Exercises
	 
25)  Write a C++ program to find the largest word in a given
     String.
     Example:
     Sample Input: C++ is a general-purpose programming language.
     Sample Output: programming
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void GCD();
void LCM();
void Factor();
void Hollow_Rectangle();
void Hollow_Pyramid();
void Display_Prime();
void Sum_Of_Two_Prime();
void Binary_To_Decimal();
void Decimal_To_Binary();
int Factorial_Recursion(int,int);
int GCD_Recursion(int,int,int,int,int);
void largest_Element_Array();
void Deviation_Array();
void array_access_pointer();
void add_two_matrices();
   int main()
{
    int op,n,Fact,F=1;
    int n1,n2,loop,i=1,G,HF;
    printf("----------------MENU---------------\n");
    printf("Enter a choose No of Upper Question:");
    scanf("%d",&op);

     switch (op)
     {
     case 1:
     GCD();
     break;
     case 2:
     LCM();
     break;
     case 3:
     Factor();
     break;
     case 4:
     Hollow_Rectangle();
     break;
     case 5:
     Hollow_Pyramid();
     break;
     case 6:
     Display_Prime();
     break;
     case 7:
     Sum_Of_Two_Prime();
     break;
     case 8:
     Binary_To_Decimal();
     break;
     case 9:
     Decimal_To_Binary();
     break;
     case 10:
     printf("Enter a Number:");
     scanf("%d",&n);
    Fact = Factorial_Recursion(n,F);
    printf("%d Factorial of %d",Fact,n);
     break;
     case 11:

     printf("Enter First Number");
     scanf("%d",&n1);
    printf("Enter second Number");
     scanf("%d",&n2);
     loop=n1<n2?n1:n2;
     G = GCD_Recursion(n1,n2,i,loop,HF);
      printf("\n%d Greatest Comman Divisior of %d and %d",G,n1,n2); 
     break;
     case 12:
     largest_Element_Array();
     break;
     case 13:
     Deviation_Array();
     break;
     case 14:
     array_access_pointer();
     break;
     case 15:
     add_two_matrices();
     break;
     case 16:
     break;
     case 17:
     break;
     case 18:
     break;
     case 19:
     break;
     case 20:
     break;
     case 21:
     break;
     case 22:
     break;
     case 23:
     break;
     case 24:
     break;
     case 25:
     break;
     case 0:
     exit(0);
     default:
     printf("Invalid Choice");
         break;
     }
}
void GCD()
{
     int i,num1,num2,HCF;
    printf("\nEnter First No.");
    scanf("%d",&num1);
    printf("\nEnter Second No.");                     //HCF
                                                      //12=1,2,3,4,6,12
    scanf("%d",&num2);                                //6=1,2,3,6

    for ( i = 1; i < (num1<num2?num1:num2); i++)
    {
        if (num1%i==0 && num2%i==0)
        {
             HCF=i;
        }
        
    }
    printf("HCF=%d",HCF);
}
void LCM()
{
     int i,num1,num2,LCM;                                 //LCM                                                     //12=12,24,                                                    //6= 6,12,18     
    printf("\nEnter First No.");                          //12=12,24,36,48 
    scanf("%d",&num1);                                    //6=6,12,18,24,30,36,42,48
    printf("\nEnter Second No.");                                                                      
    scanf("%d",&num2);   
  
     for ( i = (num1<num2?num1:num2); i < (num1*num2); i++)
     {
         if (i%num1==0 && i%num2==0)
         {
             LCM=i;
             break;
         }
     }
     printf("LCM=%d",LCM);
}
void Factor()
{
    int Value;
    printf("Enter A Number By user:");
    scanf("%d",&Value);
                                            //6=1,2,3,6
    for ( int i = 1; i <= Value ; i++)
    {
        if(Value%i==0)
        printf("%d ",i);
    }
}

void Hollow_Rectangle()
{
    int i,j,row=5,column=9;
    for ( i = 1; i <= row; i++)
    {
        if(i%2!=0){   
        for ( j = 1; j <= column; j++)
        {
            if (j%2!=0 && i!=3)
            {
               printf("*");
            }
            else
            {
                   if((i==3 && j==1) || (j==8 && i==3))
                    printf("*");
                   else
                    printf(" ");
            } 
            
        }}

        printf("\n");
    }  
}
                                       
void Hollow_Pyramid()
{
    int i,j,k,row=5;
    for ( i = 1; i <=row ; i++)
    {
        for ( j = i; j <=row; j++)
        {
            if(j < 5)
            printf(" ");
            else
            printf("*"); 
        }
        
        if(i!=1){
            int p=2*(i-1);
       for ( k = 1; k <= p; k++)
       {
           if(k%p==0)
           printf("*");
           else if(i==5)
           for ( int l =1; l <=10 ; l++)
           {
               printf("*");
               k=p;
           }
           else
           printf(" ");
       }}
       
        
        printf("\n");  
    }
     
}
void Display_Prime()
{
    int First,Second,i,j;
    printf("Enter First Interval:");
    scanf("%d",&First);
     printf("\nEnter Second Interval:");
    scanf("%d",&Second);
    
    for ( i = First; i <= Second; i++)
    {
        int flag=0;
        for ( j = 2; j < i; j++)
        {
            if(i%j==0){
            flag=1;
            break;}
        }
        if(flag==0)
         printf("\n%d is Prime No:",i);  
    }
}
void Sum_Of_Two_Prime()
{
    int i,n,flag,count=0,j;
    printf("Enter a Positive Integer:Which Will checks prime No. till Integer");
    scanf("%d",&n);

    int arr[n/2];
    for ( i = 2; i <= n ; i++)
    {      flag=0;
         for ( j = 2; j < i; j++)
        {  

            if(i%j==0)
            {flag=1;
            break;}
            
        }
        if(flag==0)
        {
           count++; 
           //printf("count=%d, Prime=%d\n",count,i);
           arr[count-1]=i;      
          
        } 
    }
    for ( i = 0; i < count; i++)
          {
             printf("%d ",arr[i]); 
          }
    
   //then check first number select to another nos is eual to n(value)
     for ( i = 0; i < count; i++)
     {
         for ( j = 1; j < count; j++)
         {
             if((arr[i]+arr[j])==n)
             {
                 printf("%d+%d is equal to %d\n",arr[i],arr[j],n);
             }
         }   
     }
}
void Binary_To_Decimal()
{
    int i=-1,r,sum=0,store,n,temp;
    printf("Enter any Binary no");
    scanf("%d",&n);
    temp=n;
     while (n!=0)
     {
         r=n%10;
         i++;
         store=r*pow(2,i);
         sum+=store;
         n/=10;
     }
     printf("%d Decimal Value of %d",sum,temp);
}
void Decimal_To_Binary()
{
    int r,n;
    int a[10],i=0;
    printf("Enter any Decimal no");
    scanf("%d",&n);
    
    while (n!=0)
    {
        r=n%2;
       a[i]=r;
       i++;
        n/=2;
    }
    for (int j = i-1; j >=0; j--)
    {
         printf("%d",a[j]);
    }
}
int Factorial_Recursion(int n,int F)
{
    if(n!=0)
    {
        F=F*n; 
        n--;
       return Factorial_Recursion(n,F);
    }
    else
    return F;
}
int GCD_Recursion(int n1,int n2,int i,int loop,int GCD)
{
    //int GCD;
    //printf("\t%d of n1 %d of n2 %d of i %d of loop",n1,n2,i,loop);
   if(loop!=0)
   {
       if(n1%i==0 && n2%i==0)  // n1=6,n2=12,i=1
       {
            GCD=i;//1,2,3,6
       } 
       loop--;// 5,4,3,2,1,0
           i++;// 2,3,4,5,6,7
      return GCD_Recursion(n1,n2,i,loop,GCD);
   }
   else
   {
    return GCD;
   }
}
void largest_Element_Array()
{
    int size,i,max;
    printf("Enter a size of Array:");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for ( i = 0; i < size; i++)
    {
        if (arr[i] > max )
        {
            max=arr[i];
        }
    }
    printf("Largest value in Array=%d",max);
}
void Deviation_Array()
{
      int size,i,j;
      float sum=0.0,Deviation=0.0,mean;

      printf("Enter a size of Array:");
      scanf("%d",&size);
     float arr[size];
     for ( i = 0; i < size; i++)
     {
         scanf("%f",&arr[i]);
     }
     for ( i = 0; i < size; i++)
     {
         sum+=arr[i];
     }
     mean=sum/size;

     for ( j = 0; j < size; j++)
     {
         Deviation+=pow(arr[j]-mean,2);
     }

     printf("Standard deviation=%f",sqrt(Deviation/size)); 
}
void array_access_pointer()
{
    int size,i,j;
    int *ptr;
    printf("Enter a size of Array:");
      scanf("%d",&size);
     int arr[size];
     for ( i = 0; i < size; i++)
     {
         scanf("%d",&arr[i]);
     }
     ptr=&arr[0];
     for ( i = 0; i < size; i++)
     {
         printf("%d\n",*ptr);
         ptr++;
     }  
}
void add_two_matrices()
{
    int row,col,i,j;
    printf("Enter number of row (entered 1 to 100)");
    scanf("%d",&row);
    
    printf("Enter number of column (entered 1 to 100)");
    scanf("%d",&col);

    int matrix1[row][col],matrix2[row][col], add_matrix[row][col];

    // taking input 1st matrix
    printf("Enter matrix 1\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           scanf("%d",&matrix1[i][j]);   
        }
        printf("\n");
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
        
    }

    // taking input 2st matrix
    printf("Enter matrix 2\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           scanf("%d",&matrix2[i][j]);   
        }
        printf("\n");
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
        
    }

    //adding of  Matrixs
    printf("\nAdding of matrix:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           add_matrix[i][j]=matrix1[i][j]+matrix2[i][j];    
        }
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",add_matrix[i][j]);
        }
        printf("\n");
        
    }
  printf("\n");
}