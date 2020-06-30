/*Author: Ioannis_Ch
  Date:11/06/2020
  Purpose: convert minutes to years
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Initializing variables
	int minutesEntered = 0;
	double minutesInYear =0;
	double years = 0.0;
	double days = 0.0;
	
	printf("Please enter the number of minutes: ");

	//Get input from the user
	scanf("%d", &minutesEntered);

	//Calculations
	minutesInYear = (60 * 24 * 365);
	
	years = (minutesEntered/ minutesInYear);
	days = (minutesEntered/ 60.0) /24.0;

	//Printing outcome to the screen
	printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);

		
	return 0;
}
