#include<stdio.h>
#include<math.h>
struct Node
{
    int data;
    struct Node *next;

};
struct Node *createNode(int d)
{
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=d;
    newNode->next=NULL;
    return newNode;
}
void print(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main(){
    struct Node *temp=NULL;
    struct Node *head=NULL;
    head=temp;
    while(1)
    {
        int k;
        scanf("%d",&k);
          if(k==-1)break;
        struct Node *newNode=createNode(k);
      
        if(head==NULL)head=newNode;
        else{
            temp->next=newNode;
            temp=newNode;
        }
       
     
    }
     struct Node *curr=head->next;
       temp=head;
        while(temp!=NULL)
        {
            free(temp);
            temp=curr;
            curr->next=curr;
        }
    
    return 0;
}