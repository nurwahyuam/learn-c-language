#include <stdio.h>

int main()
{
  int array[] = {1, 3, 4, 6, 12, 45, 67, 32, 56, 78, 99};

  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
    printf("%d ", array[i]);
  }

  printf("\n");
  // program sederhana
  int age[] = {18, 19, 20, 50, 34, 25, 45, 65, 43, 24, 14, 51};
  int length = sizeof(age) / sizeof(age[0]);
  float sum = 0;

  for (int i = 0; i < length; i++)
  {
    sum += age[i];
  }

  double result = sum / length;
  printf("%f", result);

  return 0;
}