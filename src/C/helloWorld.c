#include <stdio.h>

int sum(int a, int b){
  return a + b;
}

int main(){
  int myNumber = 5;
  char myChar = 'b';
  int a = 3;
  int b = 10;
  int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
  
  int result = sum(a, b);

  printf("The result of %i + %i is %i\n", a, b, result);
  printf("The 7th number in the array is %i\n", numbers[6]);
  printf("Hello World!\nMy number is %i and my letter is %c\n", myNumber, myChar);
  
  return 0;
}