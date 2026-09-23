/*
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Program to calculate Book return details
Version: 1
*/
#include <stdio.h>

int main()
{
    int BookId, DueDate, ReturnDate, Overduedate, fineAmount,fineRate;

    // Input book ID
    printf("Enter the book ID: \t");
    scanf("%d", &BookId);

    // Input due date
    printf("Enter the Due Date: \t");
    scanf("%d", &DueDate);

    // Input return date
    printf("Enter the Return Date: \t");
    scanf("%d", &ReturnDate);

    // Calculate overdue days
    Overduedate = ReturnDate - DueDate;

    if (Overduedate <= 0) {
    	fineRate = 0;
        printf("No fine. Book returned on time.\n");
    }
    else if (Overduedate <= 7) {
    	fineRate = 20;
        fineAmount = Overduedate * 20;
        printf("Overdue days: %d\n", Overduedate);
        printf("Fine rate is Ksh20 for up to 7 days.\n");
        printf("The Fine Amount is: %d\n", fineAmount);
    }
    else if (Overduedate > 7 && Overduedate < 15) {
    	fineRate = 50;
        fineAmount = Overduedate * 50;
        printf("Overdue days: %d\n", Overduedate);
        printf("Fine rate is Ksh50 for more than 7 days up to 14 days.\n");
        printf("The Fine Amount is: %d\n", fineAmount);
    }
    else {
    	fineRate = 100;
        fineAmount = Overduedate * 100;
        printf("Overdue days: %d\n", Overduedate);
        printf("Fine rate is Ksh100 for more than 14 days onward.\n");
        printf("The Fine Amount is: %d\n", fineAmount);
    }
    printf("\n....Fine Details...\n");
    printf("BookID: %d\n", BookId);
    printf("Due Date: %d\n", DueDate);
    printf("Return Date: %d\n", ReturnDate);
    printf("Days Overdue: %d\n", Overduedate);
    printf("Fine Amount: %d\n", fineAmount);
    printf("Fine Rate: %d\n", fineRate);

    return 0;
}
