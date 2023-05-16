#include <stdio.h>

// function to find the reverse number
int findReverse(int number) {
    int reversed = 0;
    int remainder;
    
    // run a while loop until number is equal to 0
    // inside the loop find the reverse of number
    // Hint: use logic number % 10 to find the last digit
    // add last digit to reversed number using reversed * 10 + last digit
    while(number != 0){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return reversed;
}

int main() {
    
    int number;

    // get input value for number
    scanf("%d", &number); 

    // call findReverse() with argument number
    int reversed = findReverse(number);

    // check if number is equal to the returned value
    if(number == reversed){
        printf("Palindrome Number\n");
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}
