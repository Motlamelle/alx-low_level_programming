#include "main.h"
/**
 * findSQRT - computes square root recursively using binary search
 * @start: inital number in the range
 * @end: last number within the range
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int findSQRT(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
/* find mid */
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
/* following binary search */
		if (mid * mid > m)
			return (findSQRT(start, mid - 1, m));
		if (mid * mid < m)
			return (findSQRT(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (findSQRT(2, n, n));
}
