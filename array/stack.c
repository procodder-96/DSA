#include<stdio.h>
void push();
void pop();
void display();
int n;
int top=-1;
int a[10];
int main(){

while(1){
    printf("enter 2 for push,3 for pop,4 for display:");
    scanf("%d",&n);
    if(n==2){
    push();    
    }
     else if(n==3){
    pop();    
    }
     else if(n==4){
    display();    
    }
    else{
    break;    
    } 
}
    return 0;
}
void push(){
    if(top==9){
        printf("stck over flow:");
        return ;
    }
    else{
        printf("enter the no for push:");
        scanf("%d",&a[++top]);
        printf("push successfully:");
    }


}


















