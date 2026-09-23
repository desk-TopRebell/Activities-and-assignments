/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Volume and Surface Area of a cylinder
*/

#include <stdio.h>

int main() {
    // Variables
    float pi = 3.142;
    float radius, height;
    float volume, surfaceArea;

    // Prompt the user 
    printf("Enter the height:\t");
    scanf("%f", &height);

    printf("Enter the radius:\t");
    scanf("%f", &radius);

    // Calculate volume and surface area
    volume = pi * radius * radius * height;
    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;

    // Output results
    printf("Volume is: %.2f\n", volume);
    printf("Surface Area is: %.2f\n", surfaceArea);

    return 0;
}
