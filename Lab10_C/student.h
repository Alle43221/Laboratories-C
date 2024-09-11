
#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>

struct Student{
    char name[50];
    int grade;
    int studentID;
};

struct Student createStudent(char name[], int grade, int studentID);
void displayStudent(struct Student* student);

#endif // STUDENT_H

