//
// encrypt.c
//

#include <string.h>

#include "encrypt.h"


char CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int CHARS_LEN = 62;


char shiftChar(char c, int shift, int direction)
{
  // implement the character shift here:
  //  given a char c shift it either forwards (direction == 1) or backwards (direction == 0)
  //  use the CHARS array above
  //  return the newly shifted char

  int i;
  for (i = 0; i < CHARS_LEN; i++){
    if(c  == CHARS[i]){
      break;
    }
  }
//forwards
  if(direction == 1){

       for(int j = 0; j < shift; j++){
           i++;
           if (i == CHARS_LEN){
              i = 0;
           }
       }
  }
//backwards
 else {
    for(int j = 0; j < shift; j++){
      i--;
      if (i < 0){
        i = CHARS_LEN-1;
      }
    }
  }
  return CHARS[i];
}

void encrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 1);
  }
}


void decrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 0);
  }
}


void caesarEncrypt(char str[], int shift)
{
  int shifts[] = { shift };
  encrypt(str, shifts, 1);
}


void caesarDecrypt(char str[], int shift)
{
  int shifts[] = { shift };
  decrypt(str, shifts, 1);
}


