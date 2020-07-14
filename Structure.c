/*
 Author:Ioannis_Ch
 Date:14/07/2020
 Purpose:Training
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
char name[30];
char date[15];
float salary;
};

int main()
{
   /*declare and initialise structure variable*/
	struct employee emp={"Mike","7/16/15",76909.00f};

	printf("\n Name: %s"	        ,emp.name);
	printf("\n Hire Date: %s"		,emp.date);
	printf("\n Salary: %.2f\n"      ,emp.salary);

	printf("\nEnter employee information: \n");

    //get the next employee information from the user
	printf("Name: ");
	scanf("%s", emp.name);

	printf("\nHire Date: ");
	scanf("%s", emp.date);

	printf("\nSalary: ");
	scanf("%f", &emp.salary);

    //print the info that the user inserted
	printf("\n Name: %s"	,emp.name);
	printf("\n Hire Date: %s"		,emp.date);
	printf("\n Salary: %.2f\n",emp.salary);

    return 0;
}