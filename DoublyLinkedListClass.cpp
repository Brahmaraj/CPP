#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int data){
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DLL{
    public:
        Node *head;
        DLL(){
            this->head = nullptr;
        };
        void insert_at_beginning(int data){
            Node *newNode = new Node(data);
            Node *temp = head;
            if(temp==nullptr){
                head = newNode;
            }
            else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        };
        void insert_at_end(int data){
            Node *newNode = new Node(data);
            Node *temp = head;
            if(head==nullptr)
                head->data = data;
            else {
                while(temp->next!=nullptr)
                    temp = temp->next;
                temp->next = newNode;
                newNode->prev = temp;
            }
        };
        void display(){
            Node *temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        };
};

int main(){
    DLL *doublyList = new DLL();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        doublyList->insert_at_beginning(data);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int data;
        cin>>data;
        doublyList->insert_at_end(data);
    }
    doublyList->display();
    return 0;
}