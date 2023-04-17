
typedef struct Node
{
  int data;
  struct Node* next;
}Node;


void insert(Node** head,int new_data)
{
   Node* new_node = malloc(sizeof(Node));
   new_node->data = new_data;
   new_node->next = (*head_ref);
   *head = new_node;
}

void delete(Node** head,int key)
{
   if(head == NULL)
     return;
  
   Node* temp = *head,*prev;
   if(temp!=null && temp->data == key)
   { 
     *head = temp->next;
     free(temp);
     return;
   }
  
  while(temp!=null && temp->data != key)
  {
    prev = next;
    temp = temp->next;
  }
  
  prev->next = temp->next;
  free(temp);
 
}

int main()
{
   struct Node* head = NULL;
   push(&head,1);
   push(&head,2);
   push(&head,3);
   push(&head,4);
  
   delete(&head,1);
  
   
   
   return 0;
}
