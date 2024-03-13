#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 3
#define OK true
#define UNDERFLOW -1

int queue[MAX_SIZE];  
int front = -1;  
int rear = -1; 
int curr_nr = 0; 
  
void queue_push(int in_nr) {  
    if (rear == MAX_SIZE - 1) {  
        printf("OVERFLOW\n");
        return;
    }  
    if (front == -1) {  
        front = 0;  
    } 
    rear++;
    curr_nr = in_nr;
    queue[rear] = in_nr;  
}  
  
int queue_pop(int out_nr) {
  for(int i=0; i<out_nr; i++){
    if (front == -1 || front > rear) {  
        printf("UNDERFLOW\n");
        return -1;  
    }  
    int in_nr = queue[front];  
    front++;  
    return in_nr;  
  }  
}  

int queue_state(){
  return rear+1;
}

void queue_print(){
  for(int i = 0; i<rear+1; i++)
    printf("nr: %d\n", queue[front+i]);
}


int main(){
  while(true){
    int x = 0;
    scanf("%d", &x);
    if(x > 0)
      queue_push(x);
    else if(x < 0)
      queue_pop(x);
  }
}