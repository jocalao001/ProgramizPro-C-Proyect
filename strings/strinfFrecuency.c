#include <stdio.h>
#include <string.h>
 
int main() {
 
  char text[] = "C programming is interesting.";
  char ch;
  printf("insert a letter to be check: ");
  scanf("%c", &ch);
 
  // variable to store the occurrence
  int frequency = 0;
 
  // access each character 
  for (int i = 0; i < strlen(text); ++i) {
 
    // compare each character with the given character
    // if match found, increase frequency
    if (ch == text[i]) {
      ++frequency;
    }
  }
 
  printf("%d\n", frequency);    // 2
 
  return 0;
}
