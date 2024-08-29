#include<stdio.h>

int main(){
  char username[256];
  printf("Enter your username: ");
  // scanf("%s", username); => segaris
  // Atau
  fgets(username, sizeof(username), stdin); 
  printf("Hello, %s", username); 
}