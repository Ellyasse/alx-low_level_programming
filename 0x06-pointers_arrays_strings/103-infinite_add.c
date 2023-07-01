#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, j;

    if (len1 + 1 > size_r || len2 + 1 > size_r)
        return 0;

    i = len1 - 1;
    j = len2 - 1;
    r[size_r - 1] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
        int sum = digit1 + digit2 + carry;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }

        r[size_r - 2] = sum + '0';
        i--;
        j--;
        size_r--;
    }

    return &r[size_r - 1];
}
