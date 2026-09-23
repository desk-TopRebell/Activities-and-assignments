/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Exam Eligibility Program
*/

#include <stdio.h>

int main() {
    // Variables
    float attendance, averageMarks;

    // Prompt the user
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    // Check eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
