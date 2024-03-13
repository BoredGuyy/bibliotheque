#include <stdio.h>
#include "header.h"

int main(int argc, char const *argv[])
{
    float num1, num2;
    char op;

    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);

    printf("Enter l'operation: ");
    scanf(" %c", &op);

    if (op == '+')
    {
        float resSomme = somme(num1, num2);
        printf("la somme de %.2f et %.2f est %.2f\n", num1, num2, resSomme);
    }
    else if(op == '-')
    {
        float resSoustraction = soustraction(num1, num2);
        printf("la soustraction de %.2f et %.2f est %.2f\n", num1, num2, resSoustraction);
    }
    else if(op == '*')
    {
        float resMultiplication = multiplication(num1, num2);
        printf("la multiplication de %.2f et %.2f est %.2f\n", num1, num2, resMultiplication);
    }
    else if(op == '/')
    {
        if (num2 != 0)
        {
            float resDivision = division(num1, num2);
        printf("la division de %.2f et %.2f est %.2f\n", num1, num2, resDivision);
        }
        else
            printf("Impossible to divide by 0\n");
    }
    
    return 0;
}
