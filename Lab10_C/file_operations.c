#include "file_operations.h"

int get_number_of_characters(const char t[])
{
    FILE *fp = fopen(t,"r");
    int characters=0;
    char ch;
    while( (ch = getc(fp)) != EOF)
    {
        if(ch!='\n')
            characters++;
    }
    fclose(fp);
    return characters;
}

int get_number_of_lines(const char t[])
{
    FILE *fp = fopen(t,"r");
    int characters=1;
    char ch;
    while( (ch = getc(fp)) != EOF)
    {
        if(ch=='\n')
            characters++;
    }
    fclose(fp);
    return characters;
}

int get_number_of_words(const char t[])
{
    FILE *fp = fopen(t,"r");
    int characters=0;
    char ch[250];
    while(fgets(ch, 250, fp))
    {
        characters++;
    }
    fclose(fp);
    return characters;
}

