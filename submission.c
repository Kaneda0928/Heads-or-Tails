#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;
  int tail=0;
  int head=0;
  int p;
  char name[30];
  printf("who are you ?\n>");
  scanf("%s",&name);
  printf("Hello %s!\n",name);

  printf("Tossing a coin...\n");
  for(i=0;i<3;i++)
  {
    p=rand()%2;
    if(p==1)
    {
      printf("Round%d: Heads\n",i+1);
      head++;
    }
    else{
      tail++;
      printf("Round%d: Tails\n",i+1);
    }
  }
  printf("Heads: %d, Tails: %d\n",head,tail);
}