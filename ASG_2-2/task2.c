#include<stdio.h>



int main(){
    int x,original,sum=0,r;
    printf("enter the number");
    scanf("%d",&x);
    original=x;

    r=x%10;
    sum+=r*r*r;
    x/=10;

     r=x%10;
    sum+=r*r*r;
    x/=10;

     r=x%10;
    sum+=r*r*r;
    if(sum==original){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }








    return 0;
}