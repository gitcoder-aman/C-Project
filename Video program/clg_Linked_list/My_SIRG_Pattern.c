/*1

  1 2

  2 3 5*/

#include<stdio.h>
#include<string.h>
int main()
{

  /*int n,i,j;
  printf("Enter no:");
  scanf("%d",&n);
  int p=1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++){
    printf("%d",p++);
    }
    p--;
    printf("\n");
  }*/
  int i,j=0;
  char arr[]="Welcometo@Mysirgcom";
  char temp[]="";
  for(i=0;arr[i]!='\0';i++)
  {
    if((arr[i] >= 'A' && arr[i] <= 'Z')|| (arr[i] >= 'a' && arr[i] <= 'z'))
    {
     temp[j]=arr[i];
     j++;
    }
  }
  printf("After %s",temp);

}  
    

