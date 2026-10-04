/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Convert Fahrenheit to Celsius 
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;   // Formula
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    // Prompt user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call function
    celsius = convertToCelsius(fahrenheit);

    // Display result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
