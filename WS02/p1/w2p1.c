/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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

#include <stdio.h>
#define TEST_INT 24
int main(void)
{
    int intA = 0, intB = 0, fail = 0;
    intB = getIntPositive(&intA);
    if (intA == intB && intA == TEST_INT)
    {
        printf("<PASSED>\n");
    }
    else
    {
        printf("<!!! FAILED !!!>\n");
        fail++;
    }
    return 0;
}
int getIntPositive(int *int_ptr)
{
    int input;
    int flag = 1;

    do
    {
        scanf("%d", &input);
        if (input <= 0)
        {
            printf("ERROR: Enter a positive value: ");
        }
        else
        {
            flag = 0;
        }
    } while (flag);

    if (int_ptr != NULL)
    {
        *int_ptr = input;
    }
    return input;
}