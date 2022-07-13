                                         //CodeWithAman
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *next;
};
struct node *start;
void SecondMethodAddNode();
void Display();
void Prime();
void CheckPalindrome();
void MoveFirstNodeToLast();
int main()
{
    int op;
    do
    {
        //system("cls");
        printf("\n---------MENU----------");
        printf("\n1) 2nd Method add Node \n2) Display Node \n3) Prime \n4) CheckPalindrome \n5) Exit:\n6)MoveFirstNodeToLast \n7)DeleteFirstNode\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
        SecondMethodAddNode();
            break;
        case 2:
        Display();
        break;
        case 3:
        Prime();
        break;
        case 4:
        CheckPalindrome();
        break;
        case 5:
        exit(0);
        break;
        case 6:
        MoveFirstNodeToLast();
        break;
        case 7:
        DeleteFirstNode();
        break;
        default:
        printf("\nInvalid Choice:");
            break;
        }
    } while (1);
}
void SecondMethodAddNode()
{
    struct node *ptr,*last;
    ptr=(struct node *)malloc(sizeof(struct node));
  
    if(ptr==NULL)
    {
        printf("\nMemory is not Available");
        return;
    }
    printf("\nEnter Element in Node:");
    scanf("%d",&ptr->x);
    
    if(start==NULL)
    {
        start=ptr;
        ptr->next=ptr;
    }
    else
    {
        last=start;
        while (last->next!=start)
        {
            last=last->next;
        }
        last->next=ptr;
        ptr->next=start;
    }
}
void Display()
{
    struct node *ptr;
    ptr=start;
    do
    {
        printf("\nElement=%d",ptr->x);
        //printf("\n%u",ptr);
        ptr=ptr->next;
    } while (ptr!=start);
}
void Prime()
{
    struct node *ptr;
    int i,count=0,flag=0;
    ptr=start;
    do
    {
        flag=0;
        for ( i = 1; i <= ptr->x; i++)
        {
            if (ptr->x%i==0)
            {
                flag++;
            }
        }
        if(flag==2)
        {
        printf("\nPrime=%d",ptr->x);
        count++;
        }
        ptr=ptr->next;
        
    } while (ptr!=start);
    
    printf("\nCount__Prime=%d",count);
}
void CheckPalindrome()
{
    struct node *ptr;
    int temp,rem,sum,n;
    ptr=start;
    do
    {
        temp=ptr->x;
        n=ptr->x;
        sum=0;
        while (n > 0 )
        {
         rem=n%10;
         sum=sum*10+rem;
         n/=10;
        }
        if(temp==sum)
        {
            printf("\nPalindrome=%d",sum);
        }
        ptr=ptr->next;

    } while (ptr!=start);
    
}
void MoveFirstNodeToLast()
{
    struct node *ptr;
    ptr=start;

    start=ptr->next;
  
    printf("Node successful Move First Node to attached in  Last position ");
}
void DeleteFirstNode()
{
    struct node *ptr,*last;
    ptr=start;
    if(ptr==start)
    {
    last=start;
     while (last->next!=start)
        {
            last=last->next;
        }
       
        last->next=ptr->next;
        start=ptr->next;
         printf("%d node is deleted",ptr->x);
      free(ptr);
    } 
    
}