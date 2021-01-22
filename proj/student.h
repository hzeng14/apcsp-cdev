//
// student.h
//

typedef struct 
{
  char* firstName;
  char* lastName;
  unsigned int age;
  long id;
} Student;


//
// create a student and add the student to the list of students
//
void createStudent(char* fn, char* ln, int age, int id);

//
// delete all students and free the memory
//
void deleteStudents();

//
// load and save students to the student.data file
//  load students overwrites the existing students in memory
//  key is the encryption key 0 is no encryption
//
void saveStudents(int key);
void loadStudents(int key);

//
// print all students in memory or print a specific student
//
void printStudent(Student* student);
void printStudents();



