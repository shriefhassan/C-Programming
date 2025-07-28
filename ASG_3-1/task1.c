#include<stdio.h>

void swap(int *x,int *y){
    if(x!=y){
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
    }


}




int main(){
    int x,y;
    printf("enter first no.") ;
    scanf("%d",&x);
    printf("enter second no.") ;
    scanf("%d",&y);
    printf("before swap:x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("after swap:x=%d,y=%d\n",x,y);

    return 0;
}

