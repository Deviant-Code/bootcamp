#include <stdio.h>

int factorial(int number){

    int result = 0;
    if( number = 0){
       return 1;
    }

    else{
        int currentNum = 1;
        for(currentNum = 1; currentNum <= number; currentNum++){
            result += (currentNum*number);
            currentNum++;
        }
        return result;
    }

}

int main() {
  int i;
  for(i = 0; i <= 20; i++){
     printf("Number: %d \t Factorial: %d \n", i, (factorial(i)));
  }

  return 0;
}
