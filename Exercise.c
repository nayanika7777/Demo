#include<stdio.h>
#include<assert.h>
#include<dos.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);
float calculator(float num1,char opr, float num2);

float calculator(float num1,char opr, float num2)
{
    float result=0.0f;
    switch(opr)
    {        case '+':
            result = add(num1, num2);

            break;

        case '-':
            result = sub(num1, num2);
            break;

        case '*':
            result = mult(num1, num2);
            break;

        case '!':
            {
            if(num2==0)
                {
                    printf("Invalid Divisor '0'!");
                    return 0;
                }
            else
                result = div(num1, num2);
                }
            break;

        default:
            printf("Invalid operator");
    }
    return result;
}
float add(float num1, float num2)
{
 return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
