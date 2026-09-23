/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Water Bill Calculator
*/

#include <stdio.h>

int main() {
    // Variables
    int units;
    float bill;

    // Prompt the user
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on rules
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Display result
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
