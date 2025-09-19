#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the numbers : ");
    scanf("%d %d ",&num1, &num2);
    if(num1 > num2){
        printf("the first number is greater %d",num1);
    }
    else{
        printf("the second number is greater %d",num2);
    }
    return 0;
}