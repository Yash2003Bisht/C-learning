#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char* string, char* replace, char* new_char){
    char* result, temp[100];
    int flag = 0, j = 0, i, size;
    
    result = strstr(string, replace);

    for (i = 0; result[i] != '\0'; i++){
        if (result[i] == ' ' && !flag)
            flag = 1;
        
        if (flag){
            temp[j] = result[i];
            j++;
        }
    }

    temp[j] = '\0';

    if (result)
        strcpy(result, new_char);
    
    size = strlen(string);

    for (i = 0; temp[i] != '\0'; i++)
        string[size + i] = temp[i];
    
    if (!flag){
        string[size + i] = '.';
        string[size + i + 1] = '\0';
    } else
        string[size + i] = '\0';
} 

char * replace_optimized(const char* original_string, const char* old_word, const char* new_word){
    char* new_string;
    int i=0, count=0, old_word_len = strlen(old_word), new_world_len = strlen(new_word);
    
    // count the number of times old word occur in the string 
    for (; original_string[i] != '\0'; i++){
        if (strstr(&original_string[i], old_word) == &original_string[i]){
            count++;

            // jump to index after the old word. 
            i += old_word_len - 1; 
        }
    }

    // making new string of enough length 
    new_string = (char *) malloc(i + count * (old_word_len - new_world_len) + 1);
    
    i = 0;

    while(*original_string){
        // compare the substring with the result 
        if(strstr(original_string, old_word) == original_string){
            strcpy(&new_string[i], new_word);
            i += new_world_len;
            original_string += old_word_len;

        } else{
            new_string[i++] = *original_string++;
        }

    }
    
    new_string[i] = '\0';

    return new_string;
}

int main(){

    /*
        ----------------------- FILE IO PRACTICE -----------------------
    */ 

    // ----------- TAKE INPUT -----------
    char name[100], item[100], outlet[100];
    
    printf("Enter Name: ");
    scanf("%[^\n]%*c", name);

    printf("Enter Item: ");
    scanf("%[^\n]%*c", item);

    printf("Enter Outlet: ");
    scanf("%[^\n]%*c", outlet);


    // ----------- READ FILE -----------
    FILE* file = NULL;
    char letter[2][100];

    file = fopen("12_practice.txt", "r");
    fscanf(file, "%[^\n]%*c", letter[0]);
    fscanf(file, "%[^\n]%*c", letter[1]);
    fclose(file);

    // ----------- REPLACE WORDS -----------
    replace(letter[0], "{{name}}", name);  // replace {{name}}
    replace(letter[0], "{{item}}", item);  // replace {{item}}
    replace(letter[0], "{{outlet}}", outlet);  // replace {{outlet}}

    replace(letter[1], "{{outlet}}", outlet);  // replace {{outlet}}

    printf("\n"); // ignore this

    // ----------- PRINT OUTPUT -----------
    printf("Not optimized\n");
    printf("%s\n", letter[0]);
    printf("%s\n", letter[1]);


    printf("\n"); // ignore this

    // ----------- REPLACE WORDS(optimized) -----------
    char * ptr_letter1, * ptr_letter2;
    ptr_letter1 = replace_optimized(letter[0], "{{name}}", name);  // replace {{name}}
    ptr_letter1 = replace_optimized(ptr_letter1, "{{item}}", item);  // replace {{item}}
    ptr_letter1 = replace_optimized(ptr_letter1, "{{outlet}}", outlet);  // replace {{outlet}}

    ptr_letter2 = replace_optimized(letter[1], "{{outlet}}", outlet);  // replace {{outlet}}

    // ----------- PRINT OUTPUT -----------
    printf("Optimized\n");
    printf("%s\n", ptr_letter1);
    printf("%s\n", ptr_letter2);

    return 0;
}