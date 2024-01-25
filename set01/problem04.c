#include<stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main() {
    int num1, num2, sum;

    num1 = input();
    num2 = input();

    add(num1, num2, &sum);
    output(num1, num2, sum);

    return 0;
}

int input() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("The sum of %d and %d is %d\n", a, b, sum);
}
