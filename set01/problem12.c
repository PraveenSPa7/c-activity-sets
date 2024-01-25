// Write a C program to find the sum of n complex numbers

#include<stdio.h>
struct complex
{
    float real;
    float imaginary;
};

typedef struct complex complex;

int get_n(); 
complex input_complex(); 
void input_n_complex(int n, complex c[n]);
complex add(complex a, complex b);
complex add_n_complex(int n, complex c[n]);
void output(int n, complex c[n], complex result);

int main() {
    int n;
    n = get_n();
    complex number[n];
    input_n_complex(n, number);
    complex sum = add_n_complex(n, number);
    output(n, number, sum);
    return 0;
}

int get_n() {
    int n;
    printf("enter the complex number : ");
    scanf("%f", &n);
    return n;
}

complex input_complex(){
    complex c;
    printf("enter the real and imaginary number : ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

void input_n_complex(int n, complex c[n]) {
    for(int i = 0; i < n; i++){
        c[n] = input_complex();
    }
}

complex add(complex a, complex b){
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

complex add_n_complex(int n, complex c[n]) {
        complex sum = {0, 0};
        for(int i = 0; i < n; i++){
            sum = add(sum, c[n]);
    }
    return sum;
}

void output(int n, complex c[n], complex result) {
    printf("sum of complex number : ");
    for(int i = 0; i < n; i++){
        printf("%.2f + %.2f", c[i].real, c[i].imaginary);
    }
            printf(" is %.2f + %.2f", result.real, result.imaginary);
}