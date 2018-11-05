//insert & delete at beginning of linklist

#include <stdio.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void insert(int value)
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
      printf("\nlink is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nlink elements are - \n");
      while(temp->next != NULL)
      {
    	 printf("%d ",temp->data);
    	 temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void delet()
{
   if(head == NULL)
	printf("\n\nStack is Empty!!!");
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


int main()
{
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   display();
   delet();
   display();
   delet();
   display();
    return 0;
}


