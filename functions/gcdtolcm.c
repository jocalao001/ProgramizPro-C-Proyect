#include <stdio.h>

// create function findGCD with parameters: num1 and num2
// compute the gcd of two numbers and compute lcm with parameters num1 and num2 divided by gcd 
int findGCD(int num1,int num2){
    int gcd = 1;
    for (int i = 1; i <= num1 && i <= num2; ++i){
        if ((num1 % i == 0) && (num2 % i == 0)){
            gcd = i;
        }
    }
    int lcm = (num1 * num2) / gcd;

    return (lcm);
}

int main() {
  
    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findGCD() with arguments x and y
    int lcm = findGCD( x, y);

    // print the returned value
    printf("%d\n", lcm);
    
    return 0;
}
