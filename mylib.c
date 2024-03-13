#include <stdio.h>

float somme(float num1, float num2)
{
        return (num1 + num2);
}
float soustraction(float num1, float num2)
{
        return (num1 - num2);
}
float multiplication(float num1, float num2)
{
        return (num1 * num2);
}
float division(float num1, float num2)
{
        if (num2 != 0)
        {
                float  res = num1 / num2;
                return res;
        }
        else
        {
                printf("Impossible to divide by 0");
        }
}