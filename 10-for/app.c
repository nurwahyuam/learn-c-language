#include <stdio.h>

int main()
{
  // for(int i = 1; i <= 4; i++){
  //   if (i <= 3){
  //     printf("%d\n", i);
  //   } else {
  //     printf("Happy New Year!!");
  //   }
  // }

  for (int i = 0; i < 5; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < 5; j++)
      {
        if (j % 2 == 0)
        {
          printf(" ");
        }
        else
        {
          printf("*");
        }
      }
      printf("\n");
    }
    else
    {
      for (int j = 0; j < 5; j++)
      {
        if (j % 2 == 0)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  return 0;
}