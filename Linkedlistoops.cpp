#include<bits/stdc++.h>
using namespace std;
class Node{
	private:
		Node* next;
		int info;
	public:
		int getInfo(){
			return info;
		}
		Node* getNext(){
			return next;
		}
		void setNext(Node* x){
			next = x;
		}
		void setInfo(int x){
			info = x;
		}
};
class interfaceLinkedList: public Node{
	protected :
	Node* Head = NULL;
	virtual void Display()=0;
	virtual void InsertAtBeg(int)=0;
	virtual void InsertAtPos(int,int)=0;
	virtual void InsertAtEnd(int)=0;
};
class LinkedList:public interfaceLinkedList{
	public :
		void InsertAtBeg(int);
		void InsertAtPos(int,int);
		void InsertAtEnd(int);
		void Display();
};
void LinkedList::InsertAtBeg(int x){
	if(Head==NULL){
		Head = new Node();
		Head->setInfo(x);
		Head->setNext(NULL);
	}
	else{
		Node* New = new Node();
		New->setInfo(x);
		New->setNext(Head);
		Head = New;
	}
	return;
}
void LinkedList::InsertAtPos(int x, int y){
	Node* temp = Head;
	for(int i=1;i<y;i++){
		temp = temp->getNext();
	}
	Node* New = new Node();
	New->setInfo(x);
	New->setNext(temp->getNext());
	temp->setNext(New);
	return;
}
void LinkedList::InsertAtEnd(int x){
	Node* temp = Head;
	while(temp->getNext()!=NULL){
		temp = temp->getNext();
	}
	Node* New = new Node;;
	New->setInfo(x);
	New->setNext(NULL);
	temp->setNext(New);
	return;
}
void LinkedList::Display(){
	Node* temp = Head;
	while(temp!=NULL){
		cout<<" "<<temp->getInfo();
		temp = temp->getNext();
	}
	return;
}
int main(){
	LinkedList ll;
	ll.InsertAtBeg(1);
	ll.InsertAtEnd(5);
	ll.InsertAtPos(6,1);
	ll.Display();
	return 0;
}
