#include <stdio.h>

// global variable
int y = 10;

void myFunction()
{
  // local variable
  int x = 5;

  printf("%d, %d", x, y);
}

int main()
{
  myFunction();
  return 0;
}