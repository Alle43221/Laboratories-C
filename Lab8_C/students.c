#include <stdio.h>
#include "stdlib.h"
#include "string.h"

struct Student{
    char name[50];
    int id;
    int marks[5];
    float average;
};

int main() {
    char name[50];
    int n, id, mark;
    printf("%s", "Write the number of students\n");
    scanf("%d", &n);
    struct Student *myStudents = malloc(n*sizeof(struct Student));
    if(myStudents==NULL){
        perror("Memory allocation failed");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("Student %d info:\n", i+1);
        scanf("%50s", name);
        strcpy(myStudents[i].name, name);
        scanf("%d", &id);
        myStudents[i].id=id;
        myStudents[i].average=0;
        for(int j=1; j<=5; j++){
            scanf("%d", &mark);
            myStudents[i].marks[j-1]=mark;
            myStudents[i].average+=mark;
        }
        myStudents[i].average/=5;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(myStudents[i].average<myStudents[j].average)
            {
                struct Student aux;
                aux=myStudents[i];
                myStudents[i]=myStudents[j];
                myStudents[j]=aux;
            }
            else if(myStudents[i].average==myStudents[j].average){
                if(strcmp(myStudents[i].name, myStudents[j].name)<1){
                    struct Student aux;
                    aux=myStudents[i];
                    myStudents[i]=myStudents[j];
                    myStudents[j]=aux;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s %d : %d %d %d %d %d\n",
               myStudents[i].name, myStudents[i].id,
               myStudents[i].marks[0], myStudents[i].marks[1], myStudents[i].marks[2],
               myStudents[i].marks[3], myStudents[i].marks[4]);
    }

    free(myStudents);

    return 0;
}
