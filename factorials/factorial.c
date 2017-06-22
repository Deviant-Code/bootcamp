#include <stdio.h>

int number = 0;

int factorial(int number){
    int factorialResult = 0;
    if( number = '0'){
       return factorialResult;
    }
    else{

        for(int start = 1; start <= number; start++){
            factorialResult += (start*start);
        }
        return factorialResult;
    }
}

int main() {
  for(int i = 0; i <= 20; i++){
     printf("%d \n", factorial(i));
  }

  return 0;
}
