#include "student.h"

struct Student createStudent(char name[], int grade, int studentID){
    struct Student newStudent;
    newStudent.grade=grade;
    strcpy(newStudent.name, name);
    newStudent.studentID=studentID;
    return newStudent;
}
void displayStudent(struct Student* student){
    printf("Student: %s\n", student->name);
    printf("Grade: %d\n", student->grade);
    printf("Student ID: %d\n", student->studentID);
}
