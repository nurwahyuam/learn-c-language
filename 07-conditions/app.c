#include<stdio.h>
#include<stdbool.h>

int main(){
  int time = 40, umur = 19;
  bool status = (time < 60) ? printf("Hello World!") : false;
  if(umur >= 12 && umur <= 18) {
    printf("\nKamu sudah remaja");
  } else if(umur > 18 && umur <= 28 ) {
    printf("\nKamu sudah dewasa");
  } else {
    printf("\nKamu sudah cukup hebat dimana dunia punya kamu alias tua");
  }
  return 0;
}