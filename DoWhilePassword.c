/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Password System using Do While Loop
*/

#include <stdio.h>

int main() {
    int password;

    // Do while loop keeps asking until correct password
    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Wrong password! Try again.\n");
        }

    } while (password != 1234);

    // If loop ends, password is correct
    printf("Access Granted\n");

    return 0;
}
