#include <stdio.h>
#include <string.h>
#include "encrypt.h"


// test code for encrypt functions

void testEncrypt(int enc, char in[], int shifts[], int slen, char* out)
{
  if (enc)
    encrypt(in, shifts, slen);
  else
    decrypt(in, shifts, slen);
  
  if (strcmp(in, out) != 0)
    printf("FAIL %s : %s\n", in, out);
  else
    printf("PASS %s\n", out);
}


int main()
{
  char inpStr[256];

  int shifts[] = {3,4,5};

  // test encrypt
  strcpy(inpStr, "hello");
  testEncrypt(1, inpStr, shifts, 1, "khoor");
  testEncrypt(0, inpStr, shifts, 1, "hello");
  
  strcpy(inpStr, "z9Z");
  testEncrypt(1, inpStr, shifts, 1, "Cc2");
  testEncrypt(0, inpStr, shifts, 1, "z9Z");

  strcpy(inpStr, "hello");
  testEncrypt(1, inpStr, shifts, 3, "kiqos");
  testEncrypt(0, inpStr, shifts, 3, "hello");
}
