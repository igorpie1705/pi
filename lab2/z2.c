#include <stdio.h>

#define MAX_SIZE 10 


typedef struct {  
    int arr[MAX_SIZE];  
    int top;  
} Stack;  


void initialize (Stack *stack) {  
    stack->top = -1;  
}  

void stack_push (Stack *stack, int element) {  
    if (stack->top == MAX_SIZE - 1) {  
printf("OVERFLOW\n", element);  
        return;  
    }  
    stack->arr[++stack->top] = element;  
}  

int pop (Stack *stack) {  
    if (stack->top == -1) {  
printf("UNDERFLOW\n");  
        return -1; // Return an invalid value to indicate underflow  
    }  
    return stack->arr[stack->top--];  
}  

int top (Stack *stack) {  
    if (stack->top == -1) {  
printf("Stack is empty!\n");  
        return -1; // Return an invalid value to indicate an empty stack  
    }  
    return stack->arr[stack->top];  
}  

int stack_state(Stack *stack){
  int cnt = 0;
  while (stack->top != -1){
    cnt += 1;
    printf("%d ", top(stack));
    pop(stack);
  }
  return cnt;
}

int main(){
  Stack *stos;
  initialize(stos);
  
  while(0 == 0){
    int x = 0;
    scanf("%d", &x);
    if(x < 0)
      pop(stos);
    else if(x == 0){
      printf("\ndlugosc: %d", stack_state(stos));
      break;
    }
    else
      stack_push(stos, x);
  }
  return 0;
}
