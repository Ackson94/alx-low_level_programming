#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * validate_input - validates the input argument
 * @num: input string to be validated
 *
 * Return: the integer value of the string
 */
int validate_input(char *num)
{
    int i;

    for (i = 0; i < strlen(num); i++)
    {
        if (!isdigit(num[i]))
        {
            printf("Error\n");
            exit(98);
        }
    }
    return (atoi(num));
}

/**
 * multiply - multiplies two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: the product of num1 and num2
 */
int multiply(int num1, int num2)
{
    return (num1 * num2);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = validate_input(argv[1]);
    num2 = validate_input(argv[2]);

    result = multiply(num1, num2);

    printf("%d\n", result);

    return (0);
}
