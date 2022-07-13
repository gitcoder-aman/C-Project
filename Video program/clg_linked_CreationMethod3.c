#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    struct node *next;
};
struct node *start;
//void Add_Node();
void Create_List();
//void Display();
int main()
{
    Create_List();
}
void Create_List()
{
    struct node *ptr,*L;
    //char ch='y';

        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("\nMemory Is Full:");
            return;
        }
        printf("\nEnter Element:");
        scanf("%d",&ptr->x);
        if(start==NULL)
        {
            ptr->next=NULL;
            start=ptr;
        }
        else
        {
            L=start;
            while(L->next!=NULL)
            L=L->next;
            L->next=ptr;
            ptr->next=NULL;
        }
   
}
