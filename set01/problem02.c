// 2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter the first number:\n");
    scanf("%d", &num1);
    printf("enter the second number:\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("the sum of %d + %d = %d\n", num1, num2, sum);
}