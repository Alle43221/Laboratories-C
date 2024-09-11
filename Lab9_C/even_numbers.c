#include <stdio.h>

int main() {
    FILE *f=fopen("input.txt", "r");
    if (f==NULL){
        perror("Error opening the file");
        return 1;
    }
    char c;
    c=fgetc(f);
    while(c!=EOF){
        if(c>='0' && c<='9'){
            int nr=0;
            while(c>='0' && c<='9'){
                nr=nr*10+c-'0';
                c=fgetc(f);
            }
            if(nr%2==0)
                printf("|");
            else
                printf("%d", nr);
        }
        else{
            printf("%c", c);
            c=fgetc(f);
        }
    }
    return 0;
}
