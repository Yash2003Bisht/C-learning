#include <stdio.h>
#include <string.h>

void parse(char data[]){
    int i, tag=0, size=strlen(data);
    for (i=0; i<size; i++){
        if (data[i] == '<'){ // tag open
            tag = 1;
        } else if (data[i] == '>'){ // tag close
            tag = 0;
            data[i] = "";
        }
        
        // remove tag
        if (tag){
            data[i] = "";
        }
    }

    printf("%s\n", data);
}

int main(){
    /*
        BASIC HTML PARSER
    */
    char data[] = "<p> This is a paragraph tag </p>";
    parse(data);
    return 0;
}