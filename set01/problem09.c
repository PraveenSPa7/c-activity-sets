// Write a C program to find the square root of a number.

#include<stdio.h>
#include<math.h>

float input(); 
float square_root(float n); 
void output(float n, float sqrroot);

int main() {
    int n, sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n, sqrroot);
    return 0;
}

float input() {
    float n;
    printf("enter the value : ");
    scanf("%f", &n);
    return n;
}

float square_root(float n){
    return sqrt(n);
}

void output(float n, float sqrroot) {
    printf("the square root of %.2f is %.2f", n, sqrroot);
}