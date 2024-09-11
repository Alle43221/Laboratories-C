#include <stdio.h>
#include "string.h"

int main() {
    FILE *f=fopen("input.txt", "r");
    if (f==NULL){
        perror("Error opening the file");
        return 1;
    }
    char buffer[100];
    int i=0;
    while(fgets(buffer, sizeof (buffer), f)!=NULL){
        i++;
        if(i%2==0){
            printf("%s", buffer);
        }
        else{
            for(int j=strlen(buffer)-2; j>=0; j--){
                printf("%c", buffer[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
