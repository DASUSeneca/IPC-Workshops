/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// User-Defined Libraries


// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int *intPointer)
{
	int input;

	do
	{
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (input <= 0);

	if (intPointer != NULL)
	{
		*intPointer = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double *doublePointer)
{
	double input;

	do
	{
		scanf("%lf", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (input <= 0);

	if (doublePointer != NULL)
	{
		*doublePointer = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int noProducts)
{
	printf(
		"Cat Food Cost Analysis\n"
		"======================\n"
		"\n"
		"Enter the details for %d dry food bags of product data for analysis.\n"
		"NOTE: A 'serving' is %dg\n",
		noProducts, NO_SUGGESTED_GRAMS);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequenceNumber)
{
	struct CatFoodInfo cfi;
	printf("\n"
		   "Cat Food Product #%d\n"
		   "--------------------\n",
		   sequenceNumber + 1);
	printf("SKU           : ");
	do
	{
		scanf("%d", &cfi.sku);
		if (cfi.sku <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (cfi.sku <= 0);

	printf("PRICE         : $");
	do
	{
		scanf("%lf", &cfi.price);
		if (cfi.price <= 0.0)
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (cfi.price <= 0);

	printf("WEIGHT (LBS)  : ");
	do
	{
		scanf("%lf", &cfi.weight);
		if (cfi.weight <= 0.0)
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (cfi.weight <= 0);

	printf("CALORIES/SERV.: ");
	do
	{
		scanf("%d", &cfi.calories);
		if (cfi.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (cfi.calories <= 0);

	return cfi;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double *price, const int calories, const double *weight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)


// 9. convert lbs: g (call convertKG, then * 1000)


// 10. convert lbs: kg and g


// 11. calculate: servings based on gPerServ


// 12. calculate: cost per serving


// 13. calculate: cost per calorie


// 14. Derive a reporting detail record based on the cat food product data


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg\n", ???);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table


// 17. Display the findings (cheapest)


// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{

}
