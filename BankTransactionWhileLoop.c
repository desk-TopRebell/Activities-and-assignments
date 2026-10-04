/*
Name: Carl Oliver
Registration Number: BCS-05-0067/2026
Description: While loop for bank transaction
*/

#include <stdio.h>

int main() {
    int balance, withdraw;

    // Initial balance
    printf("Enter your account balance: ");
    scanf("%d", &balance);

    // While balance is positive
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        balance = balance - withdraw; // update balance

        printf("Remaining balance: %d\n", balance);
    }

    printf("Transaction stopped. Balance is zero or negative.\n");

    return 0;
}