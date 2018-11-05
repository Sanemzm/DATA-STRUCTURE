//insert and delete element of queue using array

#include<stdio.h>

int q[50], front = 0, top = 0;

void enQ(int data){
   if(front == 50-1)
      printf("\nQueue is overflow");
   else{
      front++;
      q[front] = data;
   }
}
void deQ(){
   if(front == 0)
      printf("\nqueue is empty ");
   else{
      top++;
   }
}
void display(){
   if(front == 0)
      printf("\nqueue is empty");
   else{
      int i;
      printf("\nQueue elements are\n");
      for(i=top; i<=front; i++)
	 printf("%d\t",q[i]);
   }
}

void main()
{

enQ(1);
enQ(2);
enQ(3);
display();
enQ(4);
display();
deQ();
display();
deQ();
display();
}

