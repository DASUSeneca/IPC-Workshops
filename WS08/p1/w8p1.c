/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  : David Andres Sanchez Umbarila
Student ID#: 140273228
Email      : dasanchez-umbarila@myseneca.ca
Section    : NBB

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
		   "--------------------\n", sequenceNumber+1);
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

// 7. Logic entry point
void start()
{
	int i;
	struct CatFoodInfo catProducts[MAX_ANALIZED_PRODUCTS] = { {0} };
	openingMessage(MAX_ANALIZED_PRODUCTS);
	for (i = 0; i < MAX_ANALIZED_PRODUCTS; i++)
	{
		catProducts[i] = getCatFoodInfo(i);
	}
	displayCatFoodHeader();
	for (i = 0; i < MAX_ANALIZED_PRODUCTS; i++)
	{
		displayCatFoodData(catProducts[i].sku, &catProducts[i].price, catProducts[i].calories, &catProducts[i].weight);
	}
	
}
