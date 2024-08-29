#include<stdio.h>
#include<string.h>

int main(){
  char greeting[] = "Hello World!";
  char str1[20] = "Hello ";
  char str2[] = "World!";
  char str3[20];
  char str4[] = "Wo";
  int lenght = strlen(greeting);
  int compare = strcmp(str2, str4);

  strcat(str1, str2);
  strcpy(str3, str1);

  for (int i = 0; i < lenght; i++){
    printf("%c", greeting[i]);
  }

  printf("\n%s", str1);
  printf("\n%s", str3);
  printf("\n%d", compare);
  return 0;
}

// strlen() = untuk menghitung panjang string
// strcat() = untuk menyambungkan string 1 ke string 2
// strcpy() = untuk menyalin string baru
// strcmp() = untuk membandingkan string