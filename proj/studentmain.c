#include <stdio.h>
#include <string.h>

#include "student.h"


const int BUFFSIZE=256;
char inputBuff[256];


int getInputNumber()
{
  int num;
  while (1)
  {
    fgets(inputBuff, BUFFSIZE, stdin);
    if (sscanf(inputBuff, "%ud", &num) == 1 && num >= 0) break;
                
    printf("Not a valid number - try again!\n");
  }
  return num;
}


int main()
{
  char fname[BUFFSIZE];
  char lname[BUFFSIZE];

  // key to encrypt/decrypt
  int key = 0;

  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, l to load, s to save, e encrypt, q to quit: ");
    fgets(inputBuff, BUFFSIZE, stdin);
    if (sscanf(inputBuff, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      printStudents();
      continue;
    }
    else if (c == 'l')
    {
      loadStudents(key);
      continue;
    }
    else if (c == 's')
    {
      saveStudents(key);
      continue;
    }
    else if (c == 'e')
    {
      printf("\nEnter an encrypt/decrypt key: ");
      fgets(inputBuff, BUFFSIZE, stdin);
      int x;
      if (sscanf(inputBuff, "%d", &x) == 1) 
        key = x;
      else
        printf("enter a positive shift key\n");
    }
    else if (c == 'a')
    {
      // enter a new student      
      printf("\n First name: ");
      fgets(inputBuff, BUFFSIZE, stdin);
      sscanf(inputBuff, "%s", fname);

      printf(" Last name: ");
      fgets(inputBuff, BUFFSIZE, stdin);
      sscanf(inputBuff, "%s", lname);
          
      printf(" Enter age: ");
      int age = getInputNumber();

      printf(" Enter id: ");
      int id = getInputNumber();

      createStudent(fname, lname, age, id);
    }
  }
  
  printf("\nGoodbye!\n");
}
