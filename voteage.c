#include <stdio.h>

int main() {
  int votingAge = 18,age;
  printf("enter an age: ");
  scanf("%d",&age);

  if (age>= votingAge) 
    printf("Old enough to vote!");
  else
    printf("Not old enough to vote.");
  
   return 0;
}
