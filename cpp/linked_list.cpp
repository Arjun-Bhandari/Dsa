#include <iostream>
using namespace std;

class Node {
    public :
        int data;
        Node *next;

        Node( int info, Node* next = nullptr){
            this->data = info;
            this->next = next;
        }
};

class SinglyLinkedList{
    public:
        Node *head;

        SinglyLinkedList(){
            head = nullptr;
        }


        void insertAtTheBeginning(int value){
            //loigc

            Node* temp = new Node(value);
            temp->next = head;
            head = temp;
        }

        void insertAtTheEnd(int value){
            //logic
            // step 1 create a new node
            Node* temp = new Node(value);

            //step 2 case if the node is empty 
            if(head == nullptr){
                head = temp;
                return;
            }

            //step. 3 starting from the head 
            Node* t1 = head;
            //step 4 move forward unitll the last node
           while (t1->next != nullptr){
            t1 = t1->next;
           }

           t1->next = temp;
        }

        void insertAtTheMiddle(int value, int whichplace){
            //logic
            // step 1 create a new node 

            Node* temp = new Node(value);

            //step 2 case if the node is empty

            if (head == nullptr){
                head = temp;
                return;
            }
            //step 3 decalre head 
            Node* t1 = head;

            //step 4 starting form the head till the whichplace we want to insert the value 
            while (t1 != nullptr ){
                if ( t1->data == whichplace){
                    // step 5 connect new node to next node 
                    temp->next = t1->next;
                    // step 6 connect current node to new node
                    t1->next = temp;
                    return ;
                }

                t1 = t1->next;
            }


        }



        void deleteLinkedList(int value){
            //logic
            
            //step 1 case if the node is empty 
            if (head == nullptr){
                cout << "Linked List is empty" << endl;
                return ;
            }
            
            //step 2 case if the node is the first (head)
            if ( head->data == value ){
                head = head->next;
                return;
            }
            Node* t1 = head;    
            Node* prev = nullptr;
            while (  t1 != nullptr){
                if ( t1->data == value){
                    prev->next = t1->next;
                    return;
                }
                prev = t1;
                t1 = t1->next;
            }

            cout << "Value not found in the linked list" << endl;

        }

        void printLinkedList(){
            //logic
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }



};

int main ( ){
    SinglyLinkedList linkedListObj;

    linkedListObj.insertAtTheBeginning(10);
    linkedListObj.insertAtTheBeginning(20);
    linkedListObj.insertAtTheBeginning(30);
    linkedListObj.insertAtTheBeginning(40);
    linkedListObj.insertAtTheEnd(50);
    linkedListObj.insertAtTheMiddle(2, 20);
    linkedListObj.deleteLinkedList(2);
    linkedListObj.printLinkedList();
    
    return 0;
}
