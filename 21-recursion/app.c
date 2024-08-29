#include<stdio.h>

// Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

//  for example
int sum(int k);
int main(){
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k){
  return (k > 0) ? k + sum(k - 1) : 0;
}