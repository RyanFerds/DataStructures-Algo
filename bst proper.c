#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* right;
    struct Node* left;

}node;


node*insert(node*head,int key);
node*createnode(int key);
node*createnode(int key)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data = key;
    newnode->left=NULL;
     newnode->right=NULL;
     return newnode;
}
node* insert(node*head,int key)
{
    if(head==NULL)
    {
        return createnode(key);

    }
    else if(key < head->data)
    {
        head->left=insert(head->left,key);
    }
    else if(key > head->data)
    head->right=insert(head->right,key);
    return head;
}
void inorder(node* head)
{
    if(head!=NULL)
    {
        inorder(head->left);
        printf("%d->",head->data);
        inorder(head->right);
    }
}




int main()
{
    node*head= NULL;
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,5);
    head=insert(head,6);
    head=insert(head,3);
    inorder(head);
    return 0;

}
