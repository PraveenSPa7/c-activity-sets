//write the c progarm to compare the largest of 3 pass by value

#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
    int num1, num2, num3, largest;

    num1= input();
    num2= input();
    num3= input();

    largest=compare(num1, num2, num3);
    output(num1, num2, num3, largest);
    return 0;
}

int input(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;
}

int compare(int a, int b, int c){
    if(a>=b && a>=c){
       return  a;

    }

    else if(b>=c && b>=a){
        return b;
    }

    else{
        return c;
    }
}

void output(int a, int b, int c, int largest ){
    printf("the largest is %d and d% and %d is %d\n", a,b, c ,largest);
}
