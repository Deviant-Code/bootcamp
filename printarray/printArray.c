#include <stdio.h>

// printArray goes here


int main() {
  int arraySize = 14;
  int myArray[arraySize];
  int i;
  myArray[0] = 0;
  myArray[1] = 1;
  for (i = 2; i < arraySize; i++) {
  	myArray[i] = myArray[i-2] + myArray[i-1];
  }
  printArray(myArray, arraySize);
  return 0;
}

  int printArray(int array[], int arraySize){
      int *cur =array;
      int start;

      for(start =0; start< arraySize; start++){
         printf("Index %d: %d \n", start, *cur);
         cur++;
      }
      return 0;

  }

/* int printArray(int array[], int arraySize){
    int start;
    for(start=0; start< arraySize; start++){
        printf("Index %d: %d \n",start, array[start]);
    }

    return 0;

}
*/
