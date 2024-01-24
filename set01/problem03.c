// add two numbers by pass by value

#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int num1, num2, sum;

    num1=input();
    num2=input();

    sum=add(num1,num2);
    output(num1, num2, sum);
    return 0;
}

int input(){
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    return n;
}

int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

void output(int a, int b, int sum){
    printf("the sum of %d + %d is %d\n", a, b, sum);
}