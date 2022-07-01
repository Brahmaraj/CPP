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
}