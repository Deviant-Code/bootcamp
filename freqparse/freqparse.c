#include <stdio.h>
int main() {
  // initialize variables;

  char c;
  int numbers = 0;
  int lowerCase =0;
  int upperCase =0;
  int otherSymbols=0;
  int whitespace =0;
  while ((c = getchar()) != EOF) {

	   if(c >= '0' && c  <= '9'){
		 numbers++;
	   }

	   else if((c >= 'a') && (c <= 'z')){
		 lowerCase++;
	   }

	   else if(c >= 'A' && c <= 'Z'){
		 upperCase++;
	   }

     else if(c == ' '   || c == '\n' || c == '\t'){
       whitespace++;
     }

     else{
       otherSymbols++;
     }

    // process one character
  }
  int total = numbers + lowerCase + upperCase + otherSymbols;


  // Output results here

  printf("Total Numbers: %d,  %f Percent\n", numbers, (float) numbers*100/total);
  printf("Total UpperCase: %d,  %f Percent\n", upperCase, (float) upperCase*100/total);
  printf("Total LowerCase: %d, %f Percent \n", lowerCase, (float) lowerCase*100/total);
  printf("Other Symbols: %d, %f Precent \n", otherSymbols, (float) otherSymbols*100/total);
  return 0;
}
