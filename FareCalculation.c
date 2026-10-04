/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Fare Calculator 
*/

#include <stdio.h>

// Function to calculate fare
int calculateFare(int distance) {
    int fare;
    fare = distance * 50;   // 50 KES per kilometer
    return fare;
}

int main() {
    int distance, totalFare;

    // Prompt user
    printf("Enter distance traveled (km): ");
    scanf("%d", &distance);

    // Call function
    totalFare = calculateFare(distance);

    // Display result
    printf("Total fare: KSh. %d\n", totalFare);

    return 0;
}
