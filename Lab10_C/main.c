#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"
#include "string_operations.h"
#include "file_operations.h"
#include "student.h"

int main(){
    printf("%g\n", add(1.2, 0.6));
    printf("%g\n", sub(1.2, 0.6));
    printf("%g\n", mul(1.2, 0.6));
    printf("%g\n", division(1.2, 0.6));

    char t[50]="aya";
    char s[]="e";
    concatenate(t, s);
    printf("%s\n", t);

    const char t1[]="input.txt";
    printf("%d\n", get_number_of_characters(t1));
    printf("%d\n", get_number_of_lines(t1));
    printf("%d\n", get_number_of_words(t1));

    char name[]="Andrei Mihai";
    int grade=10;
    int studentID=15;
    struct Student mystudent;
    mystudent = createStudent(name, grade, studentID);
    displayStudent(&mystudent);

    return 0;
}
