#include<stdio.h>
#include<math.h>
int main()
{
     char str[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
     char ch;
     int cnt=0;
      srand(time(NULL));
ch=str[rand()%16];
printf("Random=%c",ch);

cnt=rand()%255;
             printf("\n%d",cnt);
}