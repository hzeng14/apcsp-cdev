#include <stdio.h>



// student structure
struct Student{
         char firstname[100];
         char lastname[100];
         int age;
         int studentid;
};
//struct Student...

void printStudent(struct Student* student)
{
 printf("Student: %s %s\n", student->firstname,student->lastname);
 printf("Age: %d\n", student->age);
 printf("Id: %d\n", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
for (int i=0; i < num; i++)
 {
  printf("----- student %d -----\n", i+1);
  printStudent(&students[i]);
 }
}


int main()
{

  // an array of students
  struct Student students[10];
  //xxx students;
  char input[256];
  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      printf("\nFirst name: ");
      scanf("%s", students[numStudents].firstname);
      printf("\nLast name: ");
      scanf("%s", students[numStudents].lastname);
      printf("\nEnter age: ");
      scanf("%d", &students[numStudents].age);
      printf("\nEnter id: ");
      scanf("%d", &students[numStudents].studentid);
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
