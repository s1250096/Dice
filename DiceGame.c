#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int)time(NULL));
  int x,y;
  x=rand()%6+1;
  y=rand()%6+1;
  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",x,y,x+y);
  return 0;
}
