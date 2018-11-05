//reverse a queue using array

#include<stdio.h>

int q[50], front = -1, top = 0;

void enQ(int data){
   if(front == 50-1)
      printf("\nQueue is overflow");
   else{
      front++;
      q[front] = data;
   }
}
void deQ(){
   if(front == -1)
      printf("\nqueue is empty ");
   else{
      top++;
   }
}
void display(){
   if(front == -1)
      printf("\nqueue is empty");
   else{
      int i;
      printf("\nQueue elements are\n");
      for(i=top; i<=front; i++)
	 printf("%d\t",q[i]);
   }
}

void reverse()
{
    if(front == -1)
      printf("\nqueue is empty");
   else{
      int j;
      printf("\nreverse elements are\n");
      for(j=front; j>=top; j--)
	 printf("%d\t",q[j]);
   }
}

void main()
{

enQ(1);
enQ(2);
enQ(3);
display();
reverse();
enQ(4);
display();
reverse();
deQ();
display();
deQ();
display();
reverse();
}


