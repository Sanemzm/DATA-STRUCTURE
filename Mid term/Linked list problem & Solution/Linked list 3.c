//linked list menu for insert and delele elements at beginning and end

#include <stdio.h>
struct Node
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void insertAtBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   {

      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }

}
void display()
{
   if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp->next != NULL)
      {
       printf("%d ",temp->data);
       temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void insertAtEnd(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL){
       temp = temp->next;
      }
      temp->next = newNode;
   }

}
void removeBeginning()
{
   if(head == NULL)
   printf("\n\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
       head = NULL;
       free(temp);
      }
      else
      {
      head = temp->next;
      free(temp);
      }
   }
}

void removeEnd()
{
   if(head == NULL)
   {
      printf("\nList is Empty!!!\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(head->next == NULL)
      {
       head = NULL;
      }
      else
      {
       while(temp1->next != NULL)
       {
          temp2 = temp1;
          temp1 = temp1->next;
       }
       temp2->next = NULL;
        }
          free(temp1);
    }
}

void main()
{
   int value, choice;

   while(1){
      printf("\n1.insertatbeginning\t2.insertatend\t3.delete from beginnig\t4.delete from end\t5. Display\t6. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 insertAtBeginning(value);
		 break;
	 case 2: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 insertAtEnd(value);
		 break;
	 case 3:removeBeginning();
	      break;
	  case 4: removeEnd();
	      break;
	 case 5: display();
		 break;
	 case 6: exit(0);
	 default: printf("Error");
      }
   }
}

