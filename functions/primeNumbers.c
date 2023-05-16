#include <stdio.h>

// create a function that checks if a number is prime or not
// Hint: Look into the challenge description for the working of function
int isPrime(int n) {
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

int main() {
    
    int x, y, i, flag;
    scanf("%d %d", &x, &y);
    // swap n1 and n2 if n1 > n2
      if (x > y) {
          x = x + y;
          y = x - y;
          x = x - y;
      }
    // run the loop from x to y
    // for each iteration of loop call isPrime()
    for (i = x; i <= y; ++i) {
        // flag will be equal to 1 if i is prime
    flag = isPrime(i);

    if (flag == 1) {
      printf("%d\n", i);
    }
  }
    
    return 0;
}
