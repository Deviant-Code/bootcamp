#include <stdio.h>

long factorial(int number){

    int c;
    long factorial = 1;

    for( c = 1; c <= number; c++){
       factorial = factorial*c;
    }
    return factorial;

}

int main() {
  int i;
  for(i = 0; i <= 20; i++){
     printf("Number: %d \t Factorial: %ld \n", i, (factorial(i)));
  }

  return 0;
}
