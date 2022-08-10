#include <stdio.h>
#include <string.h>
#include <conio.h>

#define max 100
int top,stack[max];

void push(void);
void pop(void);
void display(void);
void peek(void);

//A Program to implement stacks using arrays

int main(){
    int option;
    do{
        printf("\n\n Stack Operations using Array");
        printf("\n 1: Push");
        printf("\n 2: Pop");
        printf("\n 3: Display");
        printf("\n 4: Peek");
        printf("\n 5: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: peek();
                break;
            case 5: printf("\n EXIT");
                break;
            default: printf("\n INVALID OPTION");
        }
    }while(option!=4);
    return 0;
}

void push(){
    if(top == max-1){
        printf("\n STACK OVERFLOW");
    }
    else {
        printf("\n Enter the element to be pushed: ");
        scanf("%d", &stack[++top]);
    }
}

void pop(){
    if(top == -1){
        printf("\n STACK UNDERFLOW");
    }
    else {
        printf("\n The element popped is: %d", stack[top--]);
    }
}

void display(){
    int i;
    if(top == -1){
        printf("\n STACK IS EMPTY");
    }
    else {
        printf("\n The elements in the stack are: ");
        for(i=top;i>=0;i--)
            printf("%d ", stack[i]);
    }
}

void peek(){
    if(top == -1){
        printf("\n STACK IS EMPTY");
    }
    else {
        printf("\n The top element is: %d", stack[top]);
    }
}
