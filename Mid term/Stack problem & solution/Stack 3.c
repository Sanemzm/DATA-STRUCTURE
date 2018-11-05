//Reverse Stack using Array

#include <stdio.h>

int stack[8];
int top = -1;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(top == 8-1)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];          // return to top element of stack
}

int pop() {
   int data;
   if(!isempty()) {
      data = stack[top];         //Delete data from stack
      top = top - 1;
      return data;
   } else {
      printf("Stack is empty.\n");
   }
}

int push(int data) {

   if(!isfull())               //check if full or empty
    {
      top = top + 1;
      stack[top] = data;       //insert data into stack
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int display()
{
    int i;
    if(isempty())
    {
        printf("stack is Emty\n");
    }
    else
    {
        printf("\nyour Stack\n");
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
    }
}

int reverse()
{
int j;
if(isempty())
{
    printf("stack is empty");
}
else
{
    printf("\nReverse Stack:\n");
    for(j=top;j>-1;j--)
    {
        printf("%d\t",stack[j]);
    }

}

}
int main() {
   // insert items on to the stack
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   // display item of stack
   display();
   //Delete items from stack
   pop();
   pop();
   //display again
   display();
   reverse();
}

