#include "stddef.h"
#include "linkedList.h"
#include "iostream"


LinkedList::LinkedList(){
    HEAD=NULL;
    TAIL=NULL;
}
LinkedList::~LinkedList(){}

void LinkedList::addToHead(int data){
    Node* newNode=new Node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
}

void LinkedList::traverse(){
    Node* temp=HEAD;
    while(temp!=NULL){
        std::cout<<temp->info<<" ";
        temp=temp->next;
    }
   std::cout<<std::endl;
}

void LinkedList::addToTail(){

}

int main(){

    LinkedList a;
    a.addToHead(5);
    a.addToHead(10);
    a.traverse();
}
