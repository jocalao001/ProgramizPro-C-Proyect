#include <stdio.h>

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
// Hint: Look into the description above to find out the workflow of the checkArmstrong() function

int checkArmstrong( int number){
    int originalNumber = number;
    int sum = 0;
    int remainder;
    while(originalNumber != 0){
        remainder = originalNumber % 10;
        sum += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if (sum == number){
        printf("%d\n", number);        
    } else {
      return number;
      }
}

int main() {
  
    // get input values for x and y
    int x, y, result;
    scanf("%d %d", &x, &y);

    // run loop from x to y
    // call checkArmstrong() for each value from x
    while (x <= y) {
        int result = checkArmstrong(x);
        x = x + 1;        
    } 
    if(x > y){
      return 0;
      }
    printf("%d\n", x); 
    return 0;
}
