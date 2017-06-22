#include <stdio.h>

int number = 0;

int factorial(int number){
    int factorialResult = 0;
    if( number = 0){
       return (factorialResult + 1);
    }
    else{

        for(int currentNum =1; currentNum < number; currentNum++){
            factorialResult += (number*currentNum);
        }
        return factorialResult;
    }
}

int main() {
  for(int i = 0; i <= 20; i++){
     int result = factorial(i);
     printf("%d \n", (result));
  }

  return 0;
}
