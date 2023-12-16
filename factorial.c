#include<stdio.h>

int factorial(int number){
    if(number==1 || number==0){
        return 1;
    }
    else{
        return(number * factorial(number-1));
    }
}
int main(){
    int n;

    printf("enter the number");
    scanf("%d", &n);
    printf("the factorial of the %d is %d \n", n, factorial(number));

    return 0;
}#include<stdio.h>

int factorial(int number){
    if(number==1 || number==0){
        return 1;
    }
    else{
        return(number * factorial(number-1));
    }
}
int main(){
    int n;

    printf("enter the number");
    scanf("%d", &n);
    printf("the factorial of the %d is %d \n", n, factorial(number));

    return 0;
}