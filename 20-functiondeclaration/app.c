#include <stdio.h>

void myFunction();
int main()
{
  myFunction();
  return 0;
}
void myFunction()
{
  printf("I just got executed!");
}