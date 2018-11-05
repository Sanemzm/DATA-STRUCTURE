//stack menu using switch case

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
        printf("your Stack\n");
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

int main()
{
 int choice,data;
 while(1)
 {
     printf("Stack Menu:\n");
     printf("\n1.push\t2.pop\t3.display\t4.reverse\t5.exit\n");
     printf("enter your choice:\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1: printf("enter your data:\n");
                 scanf("%d",&data);
                 push(data);
                 break;
         case 2: pop();
                 break;
         case 3: display();
         case 4: reverse();
         case 5: exit(0);
         default: printf("Error\n");
     }
 }
}


