/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Mobile Data Bundle Purchase
*/

#include <stdio.h>

int main() {
    int choice;

    // Display menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // Ask user for choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch statement
    switch (choice) {
        case 1:
            printf("Bundle: 100MB\nCost: 50 KES\n");
            break;
        case 2:
            printf("Bundle: 500MB\nCost: 200 KES\n");
            break;
        case 3:
            printf("Bundle: 1GB\nCost: 350 KES\n");
            break;
        case 4:
            printf("Bundle: 2GB\nCost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
