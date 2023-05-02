#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

int main(void)
{
    int n = 10;
    printf("n = %d\n", n);   // Output: n = 10
    reset_to_98(&n);
    printf("n = %d\n", n);   // Output: n = 98
    return 0;
}
