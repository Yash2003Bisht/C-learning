#include <stdio.h>
#include <string.h>

struct Drivers{
    char name[100];
    char route[500];
    int license_number;
    int kms;
};

int main(){
    /*
        You manage a travel agency and you want your n drivers to input their following details:
        1. Name
        2. Driving License No
        3. Route 
        4. Kms
        Your program should be able to take n as input(or you can take n=3 for simplicity and your drivers will start inputting their details one by one.

        Your program should print details of the drivers in a beautiful fashion.
        User structures.
    */

    int n, i;
    printf("Enter the number of drivers: ");
    scanf("%d", &n);
    struct Drivers drivers[n];

    /* ---------------- DRIVER DETAILS ---------------- */
    for (i=0; i<n; i++){ 

        printf("\nDriver %d please enter your details\n", i+1);

        // driver name
        printf("Enter Your Name: ");
        scanf("\n");  // read new line
        fgets(drivers[i].name, 100, stdin);

        // driver license no
        printf("Enter Your License No: ");
        scanf("%d", &drivers[i].license_number);

        // driver route
        printf("Enter Your Route: ");
        scanf("\n");  // read new line
        fgets(drivers[i].route, 100, stdin);

        // kms
        printf("Enter Kms: ");
        scanf("%d", &drivers[i].kms);
    }


    /* ---------------- PRINT DETAILS ---------------- */
    printf("\n");

    for (i=0; i<n; i++){
        printf("Name: %s", drivers[i].name);
        printf("License No: %d\n", drivers[i].license_number);
        printf("Route: %s", drivers[i].route);
        printf("Kms: %d\n", drivers[i].kms);
        printf("------------------------\n");
    }


    return 0;
}