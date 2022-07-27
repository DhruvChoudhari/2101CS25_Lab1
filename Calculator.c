#include<stdio.h>

void plus(long long n,long long m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number + second number = %d",n+m);
}

void minus(long long n,long long m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number - second number = %d",n-m);
}

void multiplication(long n,long long m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number * second number = %d",n*m);
}

void division(float n,float m){
    printf("Enter the first number : ");
    scanf("%f",&n);
    printf("Enter the second number : ");
    scanf("%f",&m);

    printf("first number / second number = %f",n/m);
}



int main(){
    printf("This is the calculator to do multiplication or addition or subtraction or division between two numbers\n");
    printf("If you wanna do addition Enter 1 \n");
    printf("If you wanna do subtraction Enter 2 \n");
    printf("If you wanna do multiplication Enter 3 \n");
    printf("If you wanna do division Enter 4 \n");
    int t;
    scanf("%d",&t);
    long long n ,m;
    if(t == 1)
        plus(n,m);
    else if(t == 2)
        minus(n,m);
    else if(t == 3)
        multiplication(n,m);
    else if(t == 4)
        division(n,m);
    return 0;
}   