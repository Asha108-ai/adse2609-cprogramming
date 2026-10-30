#include <stdio.h>
#include<math.h>

#define MYPI 3.14159// Define pi as a constant

//main function provides the entry point to the program
int main()

{
    // variable to be used in the program
    float radius, area, circumference;

    // Prompt the user for the circle's radius
    printf("Please enter the radius of the circle in cm:\n");
    scanf("%f", &radius);

    // Calculate the area and circumference of the circle
    area = MYPI * pow(radius,2);
    circumference = MYPI * (radius * 2);

    // Display the circle's dimensions
    printf("\nCircle's Dimensions");
    printf("------------------------------------\n");
    printf("\n%-13s: %6.2f cm", "Radius", radius);
    printf("\n%-13s: %6.2f cm^2", "Area", area);
    printf("\n%-13s: %6.2f cm", "Circumference", circumference);
    printf("\n------------------------------------\n");

    return 0;
}




