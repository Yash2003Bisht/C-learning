#include <stdio.h>
#include <math.h>
#define PI 3.14

float euclideanDistance(int x1, int y1, int x2, int y2){
    /*
        euclidean distance = sqrt((x2 - x1)**2 + (y2 - y1)**2)
    */
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (fptr) (int, int, int, int)){
    float euclidean_distance = fptr(x1, y1, x2, y2);
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

    float (*function_pointer) (int, int, int, int) = euclideanDistance;
    float radius = areaOfCircle(x1, y1, x2, y2, function_pointer);

    printf("The radius of circle b/w two points is %.2f\n", radius);


    return 0;
}