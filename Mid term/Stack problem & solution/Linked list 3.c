// insert and delete at end of linked list

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

void delet()
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

main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    delet();
    delet();
    display();
}




