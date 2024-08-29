#include<stdio.h>

// membuat function
void myFunction(){
  printf("Hello, World!\n"); // menampilkan teks "Hello, World!"
  myFunctionOther();
}
void myFunctionOther(){
  printf("This is a function called from another function.\n"); // menampilkan teks "This is a function called from another function."
}
int main(){
  myFunction(); // memanggil function
  return 0;
} // <= function main ini dinyatakan function utama atau function inti dari program.