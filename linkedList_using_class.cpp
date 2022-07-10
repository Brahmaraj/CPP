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
        SLLNode* head;
        SLL(){
            this->head = nullptr;
        }

        /*Insert Node at Beginning*/
        void insert_node_at_beginning(int data){
            SLLNode * newNode = new SLLNode(data);
            if(head==nullptr){
                head = newNode;
            }
            else {
                newNode->next = head;
                head = newNode;
            }
        }

        /*Insert Node at End*/
        void insert_node_at_end(int data){
            SLLNode * newNode = new SLLNode(data);
            if(head==nullptr)
                head = newNode;
            else {
                SLLNode *temp = head;
                while(temp->next!=nullptr)
                    temp = temp->next;
                temp->next = newNode;
            }
        }

        /*Insert Node at a Position*/
        void insert_node_at_position(int data, int posi){
            SLLNode * newNode = new SLLNode(data);
            SLLNode * temp = head;
            while(--posi){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
};

void display(SLLNode *head){
    while(head->next!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    SLL *llist = new SLL;
    int choice;
    int data;
    int posi;
    do{
    cout<<"Enter Options \n1.Enter Node at Beginning\n2.Enter Node at End\n3.Enter Node at Posi\n4.display\n5.Exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cin>>data;
        llist->insert_node_at_beginning(data);
        break;
    
    case 2:
        cin>>data;
        llist->insert_node_at_end(data);
        break;

    case 3:
        cin>>data>>posi;
        llist->insert_node_at_position(data, posi);
        break;

    case 4:
        display(llist->head);
        break;
    
    case 5:
        break;
    }
    }while(choice<5);
    display(llist->head);
    return 0;
}