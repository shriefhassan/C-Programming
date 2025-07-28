#include<stdio.h>


int main(){
float x;
char oper;
float y;
float result;
printf("enter first no.");
scanf("%f",&x);
printf("enter the operation");
scanf(" %c",&oper);
printf("enter second no.");
scanf("%f",&y);
switch(oper){
    case '+':
        result=x+y;
        printf("result=%f",result);
        break;

    case '-':
        result=x-y;
        printf("result=%f",result);
        break;

    case '*':
        result=x*y;
        printf("result=%f",result);
        break;

    case '/':

    if(y !=0){
        result=x/y;
        printf("result=%f",result);
        
    }
    else {
        printf("error becouse y not divided by zero");
    }
    break;
    default:printf("invalid operator");break;

}







    return 0;
}