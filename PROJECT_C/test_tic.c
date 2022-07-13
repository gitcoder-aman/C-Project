#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void check(char,char);
int end();
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName()
{
    printf("\t\t\t|----------------|\n");
    printf("\t\t\t|TIC TAC TOE GAME|\n");
    printf("\t\t\t|----------------|\n");
}
void show()
{
    printf("\n\n\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
}
void inputsymbol()
{
    printf("\nPlayer 1 Symbol :x:");
    printf("\nPlayer 2 Symbol :0:\n");
}
void start()
{
    int pa;
    printf("\nEnter Who will start the Game: Player 1 or Player 2:\n");
    scanf("%d",&pa);
}
int count=0;
void play()
{
    char p1,s1;
    printf("\nEnter Position and Symbol for the player:\n");
    fflush(stdin);
    scanf("%c",&p1);
    fflush(stdin);
    scanf("%c",&s1);
    count++;
    check(p1,s1);
}
void check(char P, char S)
{
    int i;
    for(i=0;i<=8;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}
int end()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
    return(100);
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')|| (a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
    return(200);
    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
        return(100);
    else if(a[1]=='0'&&a[4]=='0'&& a[7]=='0')
    return(200);
    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
        return(100);
    else if(a[2]=='0'&&a[5]=='0'&& a[8]=='0')
    return(200);
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
        return(100);
    else if(a[3]=='0'&&a[4]=='0'&& a[5]=='0')
    return(200);
    else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
        return(100);
    else if(a[2]=='0'&&a[4]=='0'&& a[6]=='0')
    return(200);
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
        return(100);
    else if(a[6]=='0'&&a[7]=='0'&& a[8]=='0')
    return(200);
    return(300);
}
int main()
{
    int k;
    char ch;
    system("cls");
     loop2:
         system("cls");
    gameName();
    show();
    inputsymbol();
    start();
    play();
    system("cls");
   loop1:
       system("cls");
    show();
    play();
    k=end();
    system("cls");
    show();
    if(count<9)
    {
     if(k==100)
      {
        printf("\nPlayer 1 won:");
        count=0;
      }
     else if(k==200)
      {
        printf("\nPlayer 2 won:");
        count=0;
      }
     else
         goto loop1;
    }

    else
    {
        printf("\nGame Draw:\n");
        count=0;
    }
         printf("\nDo you want Play Continoue:Enter y for YES and n for NO:");
         fflush(stdin);
         scanf("%c",&ch);
         if(ch=='y'||ch=='Y')
         {
             a[0]='1';
             a[1]='2';
             a[2]='3';
             a[3]='4';
             a[4]='5';
             a[5]='6';
             a[6]='7';
             a[7]='8';
             a[8]='9';
          goto loop2;
         }
         return 0;
}

