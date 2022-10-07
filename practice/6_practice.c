#include <stdio.h>
#include <string.h>

void parse(char data[]){
    int i, tag=0, index=0, size=strlen(data), trailing_spaces=0;
    for (i=0; i<size; i++){
        if (data[i] == '<'){ // tag open
            tag = 1;
            continue;
        } else if (data[i] == '>'){ // tag close
            tag = 0;
            continue;
        }
        
        // remove tag and trailing spaces
        if(!tag){
            if (data[i] != ' ' && !trailing_spaces){
                trailing_spaces = 1;
            }
            if (trailing_spaces){
                data[index] = data[i];
                index++;
            }
        }
    }

    data[index] = '\0';

    // remove ending space
    size = strlen(data);
    while(data[size-1] == ' '){
        data[size-1] = '\0';
        size--;
    }


    printf("``%s``\n", data);
}

int main(){
    /*
        BASIC HTML PARSER
    */
    char data[] = "<p> This is a paragraph tag </p>";
    parse(data);
    return 0;
}