#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand((unsigned int)time(NULL));
  int x,y;
  char name[20];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  x=rand()%6+1;
  y=rand()%6+1;
  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",x,y,x+y);
  if(x+y>7)
    printf("%s won!\n",name);
  else
    printf("%s lost!\n",name); 


  

  return 0;
}
