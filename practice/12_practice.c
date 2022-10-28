#include <stdio.h>
#include <string.h>

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

    // ----------- PRINT OUTPUT -----------
    printf("%s\n", letter[0]);
    printf("%s\n", letter[1]);

    

    
    return 0;
}