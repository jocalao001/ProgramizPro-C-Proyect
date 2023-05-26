#include <stdio.h>

// function to find the length
int findLength(char text[100]) {
    int count = 0;
    
    // run a while loop to access each characters
    // inside loop, increase value of count
    while(text[count] != '\0'){
        ++count;
    }

    return count;
}

int main() {
    char text1[100];
    char text2[100];
    int index = 0;

    // get 2 string inputs
     scanf("%s %s", &text1[index], &text2[index]); 

    // find the length of two strings by calling findLength()
   if(findLength(text1) > findLength(text2)){
       printf("%s\n", text1);
   } else if(findLength(text1) == findLength(text2)) {
       printf("They are the same\n");
   } else {
       printf("%s\n", text2);    
   }
	    
    
    // compare the length of two strings
    // and print the string with the larger length
    

    return 0;
}
