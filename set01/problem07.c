//Write a C program to find the sum of all natural numbers until n

#include<stdio.h>
int input_n(); 
int sum_n_nos(int n); 
void output(int n, int sum);

int main() {
    int n, total;
    n = input_n();
    total = sum_n_nos(n);
    output(n,total);
    return 0;
}

int input_n() {
    int n;
    printf("enter the n natural number : ");
    scanf("%d", &n);
    return n;
}

int sum_n_nos(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++){
        total= total + i;
    }
    return total;
}

void output(int n, int sum) {
    printf("the sum of %d natural numbers is %d\n", n, sum);
}