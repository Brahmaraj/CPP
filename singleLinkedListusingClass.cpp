#include<iostream>
using namespace std;

class SLLNode{
    public:
        int data;
        SLLNode *next;
        SLLNode(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class SLL{
    public:
        SLLNode *head;
        SLL(){
            this->head = nullptr;
        }
        void insert_node_atBeginning(int data){
            SLLNode *newNode = new SLLNode(data);
            if(head==nullptr)
                head = newNode;
            else {
                newNode->next = head;
                head = newNode;
            } 
        }
        void insert_node_atEnd(int data){
            SLLNode *newNode = new SLLNode(data);
            SLLNode *temp = head;
            if(temp==nullptr){
                head = newNode;
            }
            else {
                while(temp->next = nullptr)
                    temp = temp->next;
                temp->next = newNode;
            }
        }
        void insert_node_inMiddle(int data, int pos){
            SLLNode *newNode = new SLLNode(data);
            SLLNode * temp = head;
            if(temp==nullptr)
                head = newNode;
            else {
                int count = 1;
                while(count<pos) {
                    count++;
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
};

void display(SLLNode *head){
    SLLNode *temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        SLL *list = new SLL();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            list->insert_node_atBeginning(data);
        }
        cout<<"Linked List after bed"<<"\n";
        display(list->head);
    }
}