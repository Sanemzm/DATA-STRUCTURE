//queue menu using switch case

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
   int data, choice;

   while(1){
      printf("1.enQ\t2.deQ\t3.Display\t4.reverse\t5.exit\n");
      printf("Enter your choice:\n ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Entervalue: ");
		 scanf("%d",&data);
		 enQ(data);
		 break;
	 case 2:deQ();
		 break;
	 case 3: display();
		 break;
	 case 4: reverse();
             break;
     case 5:exit(0);
	 default: printf("\nError");
      }
   }
}

