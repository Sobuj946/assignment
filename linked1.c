#include<stdio.h>
#include<math.h>
struct Node
{
    int data;
    struct Node *next;
   
};
int createNode(int n)
{
    struct Node *newNode,*currentNode;
    int data,i;
    struct Node *start;
    start=(struct Node *)malloc(sizeof(struct Node));
    if(start==NULL){
    printf("No memory allocated");
    exit(-1);
    }
    start->data=data;
    start->next=NULL;
    return start;
}
void printLinkedList(struct Node *h)
{
    struct Node *t=h;
    while(t!=NULL)
    {
        printf("%d->",t->data);
    }
    printf("NULL\n");
}
int main(){
    // struct Node *f=createNode(10);
    // struct Node *s=createNode(20);
    // struct Node *t=createNode(20);
    // f->next=s;
    // s->next=f;
    // printf("Linked List:\n");
    // printLinkedList(f);
    // free(f);
    // free(s);
    // //free(t);
    struct Node *f;
    int n;
    while(1)
    {
        printf("Enter the number:");
        scanf("%d",&n);
        createNode(n);
    

        if(n==34)
        {
            return 0;
        }

    }

 

    
    return 0;
}