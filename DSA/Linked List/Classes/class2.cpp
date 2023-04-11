#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{

    int data;
    Node* prev;
    Node* next;
    Node(){
      
    this->data = 0;
    this->prev = NULL;
    this->next =  NULL;    
    }
    Node (int data){
        this -> data= data;
        this ->prev=NULL;
        this-> next=NULL;
    }
};
    void print(Node* &head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp-> data << " ";
                temp = temp-> next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp-> next;
                len++;
        }
        return len;
}




int main(){
    Node* first= new Node(10);
    Node* second =new Node(20);
    Node* third =new Node(30);

    first ->next=second;

}