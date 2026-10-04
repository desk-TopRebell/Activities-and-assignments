/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Electricity Bill Calculator using Function
*/

#include <stdio.h>

// Function to calculate bill
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    float total;

    // Prompt user
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Call function
    total = calculateElectricBill(units);

    // Display result
    printf("Total bill: KSh. %.2f\n", total);

    return 0;
}
