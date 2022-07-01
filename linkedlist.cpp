#include<iostream>
using namespace std;

typedef struct node {
        int data;
        struct node* next;
    } node;

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
};

node * createList(node* head){
    node *newNode, *temp;
    for(int i=1;i<=5;i++){
        newNode = (node *)malloc(sizeof(node));
        if(newNode==NULL){
            cout<<"NULL newNode";
            return head;
        }  
        newNode->data = i;
        newNode->next = NULL;
        if(head==NULL){
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
};

node* addNodeBeginning(node* newNode, node* head, int data){
    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void addNodeMiddle(node** head, int data, int value){
    node *newNode = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));
    temp = *head;
    while(temp->data!=data)
        temp = temp->next;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

void addNodeEnd(node* newNode, node** head, int data){
    newNode = (node *)malloc(sizeof(node));
    node *temp = (node *)malloc(sizeof(node));
    temp = *head;
    newNode->data = data;
    newNode->next = NULL;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = newNode;
}

int main(){
    node* head = NULL;
    node* newNode = NULL;
    head = createList(head);
    printList(head);
    head = addNodeBeginning(newNode, head, 9);
    printList(head);
    addNodeEnd(newNode, &head, 12);
    printList(head);
    addNodeMiddle(&head, 3, 50);
    printList(head);
    return 0;
}