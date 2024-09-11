#include <stdio.h>
#include "stdlib.h"

int main() {
    int n, m, p, q;
    printf("%s", "Write the dimensions for first matrix (rows columns)\n");
    scanf("%d %d", &n, &m);
       int **matrix1= malloc(n*sizeof(int*));
    if(matrix1==NULL){
        perror("Memory allocation failed");
        return 1;
    }
    for(int i=0; i<n; i++){
        matrix1[i]=malloc(m*sizeof(int));
        if(matrix1[i]==NULL){
            perror("Memory allocation failed");
            return 1;
        }
    }

    printf("%s", "Write the elements\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            scanf("%d", &matrix1[i][j]);
    }
    printf("%s", "Write the dimensions for second matrix (rows columns)\n");
    scanf("%d %d", &p, &q);
    if(m!=p){
        for(int i=0; i<n; i++){
            free(matrix1[i]);
        }
        free(matrix1);
        printf("Incompatible matrix dimensions");
        return 0;
    }
    int **matrix2= malloc(p*sizeof(int*));
    if(matrix2==NULL){
        perror("Memory allocation failed");
        return 1;
    }
    for(int i=0; i<p; i++){
        matrix2[i]=malloc(q*sizeof(int));
        if(matrix2[i]==NULL){
            perror("Memory allocation failed");
            return 1;
        }
    }
    printf("%s", "Write the elements\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)
            scanf("%d", &matrix2[i][j]);
    }

    int **matrix3= malloc(n*sizeof(int*));
    if(matrix3==NULL){
        perror("Memory allocation failed");
        return 1;
    }
    for(int i=0; i<n; i++){
        matrix3[i]=malloc(q*sizeof(int));
        if(matrix3[i]==NULL){
            perror("Memory allocation failed");
            return 1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++) {
            matrix3[i][j] = 0;
            for (int k = 0; k < m; k++) {
                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(int i=0; i<n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        free(matrix3[i]);
    }
    free(matrix3);

    for(int i=0; i<n; i++){
        free(matrix1[i]);
    }
    free(matrix1);

    for(int i=0; i<p; i++){
        free(matrix2[i]);
    }
    free(matrix2);

    return 0;
}
