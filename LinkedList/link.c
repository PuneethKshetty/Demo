
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
   Node* temp = *head;
  
 
}

int main()
{
   struct Node* head; 
   
   return 0;
}
