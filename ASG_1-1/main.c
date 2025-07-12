#include<stdio.h>
int main(){
int x;
printf("enter your number");
scanf("%d",&x);
if((x&1)==0)
{
    printf("the number is even=1\n");
    printf("the number is odd=0\n");

}
else {
    printf("the number is odd=1\n");
    printf("the number is even=0\n");
}






    return 0;
}