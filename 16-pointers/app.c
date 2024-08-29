#include<stdio.h>

int main(){
  int myAge = 19; // int variable
  int* ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

  printf("%d\n", myAge); // Output the value of myAge (43)
  printf("%p\n", &myAge); // Output the memory address of myAge (000000c77e5ff894)
  printf("%p\n", ptr); // Ouput the memory address of myAge with the pointer (000000c77e5ff894)
}