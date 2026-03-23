
#include<stdio.h>

void push(int);
void pop();
void peek();
void display();

int top = -1;
int a[100];

void push(int x){
    if(top == 99){
        printf("Stack overflow\n");
    }
    else{
        a[++top] = x;
        printf("Element after push: %d\n", a[top]);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("Deleted element: %d\n", a[top]);
        top--;
    }
}

int main(){
    int n, x;

    while(1){
        printf("\nEnter 5 for push, 6 for pop, 0 to exit: ");
        scanf("%d", &n);

        if(n == 5){
            printf("Enter number to push: ");
            scanf("%d", &x);
            push(x);
        }
        else if(n == 6){
            pop();
        }
        else if(n == 0){
            break;
        }
        else{
            printf("Invalid choice\n");
        }
    }

    return 0;
}