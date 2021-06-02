#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int n;

void insert(struct node **headref, int data) 
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *headref;
    *headref = new_node;
}

struct node* create() 
{
    struct node dummy;
    struct node *new_node = &dummy;
    dummy.next = NULL;
    int i,num;
    printf("Enter The Number Of Data: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
	{
        printf("Enter Data %d: ", i);
        scanf("%d", &num);
        insert(&(new_node->next), num);
        new_node = new_node->next;
    }
    return dummy.next;
}

void display(struct node *head) 
{
    struct node *current;
    for(current = head; current != NULL; current = current->next) 
	{
        printf("%d  ", current->data);
    }
    printf("\n");
}

void reverse(struct node *head) 
{
    struct node *current, *next, *prev, *temp;
    current = head;
    next = current->next;
    prev = NULL;
    int i;
    for(i = 0; i < n-5; i++) 
	{
        temp = current;
        current = next;
        next = next->next;
    }

     while(current != NULL) 
	{
        current->next = prev;
        prev = current;
        current = next;
        if (next!=NULL) next = next->next;
    }

    temp->next = prev;
}

int main()
{
    struct node *start = create();
    printf("\nOriginal list\n");
	display(start);
    reverse(start);
    printf("\nModified list\n");
	display(start);
}
