#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to be returned in factorial form
 * Return : factorial of n
 */
int factorial(int n)
{
if (n < 1)
return (1);
if (n == 1)
return (1);
return (n * factorial(n - 1));
}
