#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    Node * next;
    Node * prev;
}Node;

void display(Node *head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void insertAtBeginning(Node **head,int data){
    Node *newNode = (Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    (*head)->prev = newNode;
    (*head) = newNode;
}

int main(){
    Node * head = (Node *)malloc(sizeof(Node));
    head->data = 5;
    head->prev = nullptr;
    head->next = nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertAtBeginning(&head, data);
    }
    display(head);
}