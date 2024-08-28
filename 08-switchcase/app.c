#include<stdio.h>

int main(){
  int pilihan;
  printf("Masukan Nilai: ");
  scanf("%d", &pilihan);
  switch (pilihan) {
  case 1:
    printf("Nilai Kamu adalah 1");
    break;
  case 2:
    printf("Nilai Kamu adalah 2");
    break;
  case 3:
    printf("Nilai Kamu adalah 3");
    break;
  }

  // int pilihan;
  // printf("Masukan Nilai: "), scanf("%d", &pilihan);
  // switch (pilihan) {
  // case 1:
  // case 2:
  // case 3:
  //   printf("Nilai Kamu adalah %d", pilihan);
  //   break;
  // }
  return 0;
}