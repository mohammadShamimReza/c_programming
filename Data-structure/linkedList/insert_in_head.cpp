#include<bits/stdc++.h>
using namespace std;
 class Node{
 
     public:
         int val;
         Node *next;
 
     Node(int val){
         this->val = val;
         this->next = NULL;
     }
 };

 void insert_to_head(Node* &head, int val) {
     Node *newNode = new Node(val);
     newNode->next = head;
     head = newNode;
 };
 void print_linked_list(Node* head){
    Node* temp = head;
     while (temp != NULL)
     {
         cout << temp->val << endl;

         temp = temp->next;
     }
 }
 int main()
 {
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);

     head->next = a;
     a->next = b;
     b->next = c;

      insert_to_head(head, 300);
 insert_to_head(head, 3);
 print_linked_list(head);

 return 0;
 }