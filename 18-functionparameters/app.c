#include <stdio.h>

void myFunction(char *name, int age, int myNumbers[], int lenght)
{
  printf("Hello %s dan berumur %d\nNilai: ", name, age);
  for (int i = 0; i < lenght; i++)
  {
    (i == lenght - 1) ? printf("%d\n", myNumbers[i]) : printf("%d,", myNumbers[i]);
  }
}

int main()
{
  int myNumbers[] = {10, 20, 30, 40, 50};
  int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);
  myFunction("NAM_.", 19, myNumbers, lenght);
  return 0;
}