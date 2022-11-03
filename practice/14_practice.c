#include <stdio.h>
#include <math.h>
#define PI 3.14

int euclideanDistance(int x1, int y1, int x2, int y2){
    /*
        euclidean distance = sqrt((x1 - y2)**2 + (x2 - y2)**2)
    */
    return sqrt((x1 - y2)*(x1 - y2) + (x2 - y2)*(x2 - y2));
}

float areaOfCircle(int x1, int y1, int x2, int y2, int (fptr) (int, int, int, int)){
    int euclidean_distance = fptr(x1, y1, x2, y2);
    return (float) PI*(euclidean_distance*euclidean_distance);
}

int main(){
    /*
        ----------------------- CALLBACK FUNCTION PRACTICE -----------------------

        NOTE: The math library must be linked in when building the executable.
              How to do this varies by environment, but in Linux/Unix, just 
              add -lm to the command.
              -----------------------------------
              ------- gcc <file_name> -lm -------
              -----------------------------------
    */

    int x1, y1, x2, y2;
    printf("Enter the value of x1, y1, x2, y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    int (*function_pointer) (int, int, int, int) = euclideanDistance;
    float radius = areaOfCircle(x1, y1, x2, y2, function_pointer);

    printf("The radius of circle b/w two points is %f\n", radius);


    return 0;
}