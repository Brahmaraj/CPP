#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void display(Node *head){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

void insert_node(Node **head, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = (*head);
        newNode->data = data;
        newNode->next = NULL;
        while(temp->next!=(*head))
            temp = temp->next;
        temp->next = newNode;
        newNode->next = (*head);
};


int main(){
    Node* head = (Node *)malloc(sizeof(Node));
    head->data = 5;
    head->next = head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insert_node(&head, data);
    }
    display(head);
    return 0;
}