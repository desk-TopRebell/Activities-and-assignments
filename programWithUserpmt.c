/*
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Program that prompts user to input details
Version: 1
*/

#include <stdio.h>

int main ()
{

	float height  ; // format specifier (%f)
	int phone_numbers ; // %d
	double bank_balance ; //lf

	//Prompt the user
	printf(" Enter your height in Centimeters: \t");
	scanf("%f", &height);

	printf("Enter your Phone Number: \t");
	scanf("%d", &phone_numbers);

	printf("Enter Bank Balance in Kenya Shillings(Ksh): \t");
	scanf("%lf", &bank_balance);


	return 0;
}
