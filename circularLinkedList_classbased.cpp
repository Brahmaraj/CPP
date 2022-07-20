#include<iostream>
using namespace std;

class CLLNode{
    public:
        int data;
        CLLNode* next;
        CLLNode(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class CLL{
    public:
        CLLNode *head;
        CLL(){
            this->head = nullptr;
        }
        void insert_node(int data){
            CLLNode *newNode = new CLLNode(data);
            if(head==nullptr){
                head = newNode;
                newNode->next = head;
            }
            else {
                CLLNode *temp = head;
                while(temp->next!=head)
                    temp = temp->next;
                temp->next = newNode;
                newNode->next = head;
            }
        }
        void display(){
            CLLNode *temp = head;
            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            while(temp!=head);
        }
};

int main(){
    CLL *llist = new CLL();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        llist->insert_node(data);
    }
    llist->display();
    return 0;
}