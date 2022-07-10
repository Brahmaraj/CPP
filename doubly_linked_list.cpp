#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void insert_at_beginning(int data, struct Node **head){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void insert_at_end(int data, struct Node **head){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data; 
    struct Node *temp = *head;
    while(temp->next!=NULL)
        temp = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next = NULL;
}

void display(struct Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
        }
}

int main(){
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    head->prev = NULL;
    int n;
    cin>>n;
    cin>>head->data;
    for(int i=0;i<n-1;i++){
        int data;
        cin>>data;
        insert_at_beginning(data, &head);
    }
    insert_at_end(99, &head);
    display(head);
}