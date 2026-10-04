#include <stdio.h>
#include "calculation1.h"

void calculation1(int number1, int number2)
{
    int result;

    result = number1 + number2;

    printf("\nCalculation 1\n");
    printf("%d + %d = %d\n", number1, number2, result);
}
