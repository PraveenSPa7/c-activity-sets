//write the c program to compare the largest of 3 pass by refferance

#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){
    int num1, num2, num3, largest;

    num1= input();
    num2= input();
    num3= input();

    compare(num1, num2, num3, &largest);
    output(num1, num2, num3, largest);
    return 0;
}

int input(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;
}

void compare(int a, int b, int c, int *largest){
    if(a>=b && a>=c){
       *largest = a;

    }

    else if(b>=c && b>=a){
        *largest = b;
    }

    else{
        *largest = c;
    }
}

void output(int a, int b, int c, int largest ){
    printf("the largest is %d and d% and %d is %d\n", a,b, c ,largest);
}