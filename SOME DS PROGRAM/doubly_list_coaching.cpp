//creating doubly Linked List with Method #2
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int x;
    struct node *next;
};

struct node *start;
void add_node();
void display_node();
void delete1();
//void display_reverse();
int main()
{
    int op,s;
    do
     {
         printf("\n -------MENU--------");
         printf("\n 1) Add Node \n 2) Display Node \n 3) Exit ...\n 4) Delete");
         printf("\n Enter your option ::");
         scanf("%d",&op);
         switch(op)
          {
              case 1:
               add_node();
               break;
              case 2:
                display_node();
                break;
              case 3:
                printf("\n Good Bye!");
                exit(0);
              case 4:
                delete1();
                break;
              default:
               printf("\n Invalid Option ");
          }
     }while(1);
}
void add_node()
{
    struct node *ptr,*Last;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
     {
         printf("\n Memory is not available....");
         return;
     }
   printf("\n Enter element in node::");
   scanf("%d",&ptr->x);
   if(start==NULL)
   {
       start=ptr;
       ptr->next=NULL;
       ptr->prev=NULL;
   }
   else
   {
       Last=start;               //   Last=4520
          while(Last->next!=NULL)
               Last=Last->next;

          Last->next=ptr;
          ptr->prev =Last;
          ptr->next=NULL;
    }
}
void display_node()
{
    struct node *ptr;
    ptr=start;
    printf("\n Traversing in Forward direction...");
    while(ptr!=NULL)
    {
        printf("\n Element=%d",ptr->x);
        ptr=ptr->next;
    }
  printf("\n Traversing in Backward direction...");
   ptr=start;

     while(ptr->next!=NULL)
         ptr=ptr->next;

     while(ptr!=NULL)
     {
         printf("\n Element=%d",ptr->x);
         ptr=ptr->prev;

     }

}

void delete1()
{
    struct node *ptr;
    int num;
    printf("\n Enter any element for delete node::");
    scanf("%d",&num);
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->x==num)
        {
            if(ptr==start)
            {
                start=ptr->next;
                ptr->next->prev=NULL;
                printf("\n %d node is deleted..",ptr->x);
                free(ptr);
                return;
            }
            else if(ptr->next==NULL)
             {
                 ptr->prev->next=NULL;
                 printf("\n %d node is deleted...",ptr->x);
                 free(ptr);
                 return;
             }
            else
             {
                 ptr->prev->next=ptr->next;
                 ptr->next->prev=ptr->prev;
                 printf("\n %d node is deleted ....",ptr->x);
                 free(ptr);
                 return;
             }
        }//end of outer if
       ptr=ptr->next;
    }//end of while loop
   printf("\n Node not found...");
}//end of delete() function













