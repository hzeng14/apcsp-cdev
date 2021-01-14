#include <stdio.h>
#include <string.h>

int main() {
  char strOne[] = "abcdefghijklmnopqrstuvwxy";
  for (int i = 0; strOne[i] != '\0'; i++) {
    if (strOne[i] >= 'a' && strOne[i]<= 'z') {
      strOne[i] = strOne[i] - 32;
    }
  }


printf("%s", strOne);
printf("\n");

char strTwo[] = "abcdefghijklmnopqrstuvwxyz";
printf("%s\n", strTwo);

char strThree[100];

strcpy(strThree, strOne);
strcat(strThree, strTwo);
printf("Combined Strings: %s\n", strThree);

}
