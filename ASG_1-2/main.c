#include<stdio.h>
int main(){
int x;
int y;
printf("enter the number");
scanf("%d",&x);
printf("enter the number which toggle nth bit\n");
scanf("%d",&y);
printf("result=%d",x^(1<<y));

    return 0;
}