#include <stdio.h>

int number = 0;

int factorial(int number){
    int factorialResult = 0;
    if( number = 0){
       return 1;
    }
    else{
        int currentNum;
        for(currentNum = 1; currentNum <= number; currentNum++){
            factorialResult += (number*currentNum);
        }
        return factorialResult;
    }
}

int main() {
  int i;
  for(i = 0; i <= 20; i++){
     printf("Number: %d \t Factorial: %d \n", i, (factorial(i)));
  }

  return 0;
}
