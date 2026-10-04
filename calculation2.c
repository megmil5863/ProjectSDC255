#include <stdio.h>
#include "calculation2.h"

void calculation2(int number1, int number2)
{
    int result;

    result = number1 - number2;

    printf("\nCalculation 2\n");
    printf("%d - %d = %d\n", number1, number2, result);
}
