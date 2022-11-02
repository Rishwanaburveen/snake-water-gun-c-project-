#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp)
{
  if(you==comp){
       return 0;
    }
    else if((you =='s' && comp =='w') || (you =='g' && comp =='s') || (you =='w' && comp =='g') ){
       return 1;
    }
    else {
      return -1;
    }  
}
int main()
{
    char you,comp;
    srand(time(0));
    int number =rand()%100+1;
    if (number<33){
       comp='s';
    }
    else if (number<66){
       comp='w';
    }
    else{
       comp='g';
    }
    printf("enter the 's' for snake,'w' for water,'g' for gun\n");
    scanf("%c",&you);
    int result=snakewatergun(you,comp);
    if(result==0){
       printf("game drawn\n");
    }
    else if(result==1){
       printf("you win\n");
    }
    else {
       printf("you lose\n");
    }
    printf("you chose %c and the computer chose %c\n",you,comp);
    return 0;   
}
