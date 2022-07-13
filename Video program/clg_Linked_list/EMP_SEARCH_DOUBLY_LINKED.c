#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    struct node *prev;
    char code[10];
    char name[50];
    long salary;
    struct node *next;
};
struct node *start;
void ADD_EMP();
void SEARCH_EMP();
void DISPLAY_EMP();
int main()
{
    int op;
    do
    {
        printf("\n--------MENU-------------");
        printf("\n1) Add_EMP\n 2)Search_EMP\n 3)Display_EMP");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
        ADD_EMP();
            break;
        case 2:
        SEARCH_EMP();
        break;
        case 3:
        DISPLAY_EMP();
        break;
        default:
        printf("Invalid Choice:");
            break;
        }
    }while (1);
}
void ADD_EMP()
{
    
    struct node *ptr,*last;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter code,name and Salary");
    scanf("%s%s%ld",ptr->code,ptr->name,&ptr->salary);
     
     if (start == NULL)
    {
        start = ptr;
        ptr->prev = NULL;
        ptr->next = NULL;
    }
    else
    {
        last = start;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = ptr;
        ptr->prev = last;
        ptr->next = NULL;
    }
}
void SEARCH_EMP()
{
    struct node *ptr;
    char s_code[10];
    int flag;
    ptr=start;
    printf("Enter Code of Employee For Searching:");
    scanf("%s",s_code);

        while (ptr!=NULL)
        {
            if (strcmpi(ptr->code,s_code))
            {
                printf("Emp_code=%s, Emp_name=%s, Emp_salary=%ld",ptr->code,ptr->name,ptr->salary);
                return;
            }
            ptr=ptr->next;
        }
}
void DISPLAY_EMP()
{
    struct node *ptr;
    ptr = start;
    do
    {
        printf("\nEmp_Code=%s Emp_Name=%s Emp_Salary=%ld",ptr->code,ptr->name,ptr->salary);
        ptr = ptr->next;
    } while (ptr != NULL);
}


