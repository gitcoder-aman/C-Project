//creating circular Linked List with Method #2
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    struct node *next;
};

struct node *start;
void add_node();
void display_node();
/*int sum_node();
int maximum();
void search();
void display_n();
void move_first();
void delete1();*/
int main()
{
    int op,s;
    do
     {
         printf("\n -------MENU--------");
         printf("\n 1) Add Node \n 2) Display Node \n 3) Exit ...");
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
        printf("\n Memory not available ");
        return;
    }
    printf("\n Enter element in node::");
    scanf("%d",&ptr->x);
   if(start==NULL)
   {
       start=ptr;
       ptr->next=ptr;
   }
   else
   {
       Last=start;
         while(Last->next!=start)
            Last=Last->next;


            Last->next=ptr;
            ptr->next=start;
   }
}
void display_node()
{
    struct node *ptr;
    ptr=start;
    do
    {
        printf("\n Element=%d",ptr->x);
        ptr=ptr->next;
    }while(ptr!=start);


}

