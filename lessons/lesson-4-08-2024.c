#include <stdio.h>
#include <string.h>

// back to stuctures 
// you declare structures outside of the function
struct Student { // declaring a structure named Student
  // declaring members
  int id;
  char name[32];
  double gpa;
};

typedef struct { // making an identical structure to show you can make it *like* a variable in how you define structures
  int id;
  char name[32];
  double gpa;
} student_t;

int main(void) {
  struct Student s1, *s1p; // making a student s1
  s1p = &s1;
 
  printf("Please provide an ID for the student: ");
  scanf("%d%*c", &s1.id);
  printf("Please provide the first name for the student: ");
  scanf("%s%*c", s1.name); // remember, entering an array needs no &
  
  printf("You entered an ID of %d and name of %s.\n", s1.id, s1p->name); // you can also use the arrow!!!

  // But now there is a better way to get strings as input >:)
  student_t s2, *s2p;
  s2p = &s2;
  // using fgets to allow you to use white space in a name.
  fgets(s2p->name, sizeof(s2p->name), stdin);
  s2p->name[strlen(s2p->name)-1] = '\0';
  printf("s2 name is %s.\n", s2p->name);

  // you can also initialize a structure this way!!!
  student_t s3 = {54, "Mostafa Awad"}; // the order you defined it in the structure is the order you initialize it in.
  printf("The ID for student3 is %d with a name of %s.\n", s3.id, s3.name);
  
  // to compare structures, they must be the exact same structure type (Student and student_t are different!!!)

  return 0;
}



