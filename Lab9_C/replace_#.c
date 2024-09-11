#include <stdio.h>
#include "string.h"

int main() {
    FILE *f=fopen("input.txt", "r");
    if (f==NULL){
        perror("Error opening the file");
        return 1;
    }
    char c, vowels[]="aeiouAEIOU";
    c=fgetc(f);
    while(c!=EOF){
        if(strchr(vowels, c)!=NULL){
            printf("#");
        }
        else printf("%c", c);
        c=fgetc(f);
    }
    return 0;
}
