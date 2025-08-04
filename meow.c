#include <stdio.h>

int main(int argc, char* argv[]){
    int i;
    int c;
    FILE* fp;
    for(i=1; i<argc; i++){
        fp = fopen(argv[i], "r");
        if(fp == NULL){ printf("\"%s\" not found \n", argv[i]); continue; }
        while((c = fgetc(fp)) != EOF){
            printf("%c", c);
        }
        fclose(fp);
    }
    return 0;
}
