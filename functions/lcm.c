#include <stdio.h>

// create function findLCM() with parameters num1 and num2
// compute lcm of two values and return it
int findLCM(int num1, int num2){
    int lcm = (num1 > num2) ? num1 : num2;
    
    while (1) {
        if ((lcm % num1 == 0) && (lcm % num2 == 0)) {
            break;
        }
        ++lcm;
    }
    return (lcm);
}

int main() {
  
    // get input value for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findLCM() with arguments x and y
    int lcm = findLCM( x, y);

    // print the returned value
    printf("%d\n", lcm);
    
    return 0;
}
