//
// encrypt.h
//


// general purpose substitution cypher
//   str - the input/output string - each char is replaced
//   shifts - an array of shifts applied to str
//   shiftlen - the length of the shifts array
void encrypt(char str[], int shifts[], int shiftslen);
void decrypt(char str[], int shifts[], int shiftslen);


// caesar cipher - calls encrypt/decrypt with one shift
void caesarEncrypt(char str[], int shift);
void caesarDecrypt(char str[], int shift);


		     
