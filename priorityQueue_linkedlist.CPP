#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	int priority;
	node *next;
};

class linked_list{
	private:node *head,*tail;
	public:linked_list(){
		head=NULL;
		tail=NULL;
	}

	void insertion(int data,int priority){
		node *newNode=new node();
		newNode->data=data;
		newNode->priority=priority;
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			if(head->priority>priority){
			newNode->next=head;
			head=newNode;
			}
			else{
			node *temp;
			temp=head;
			while(temp->next!=NULL && temp->next->priority<priority){
				    temp=temp->next;
			}
			newNode->next=temp->next;
			temp->next=newNode;
			}
		}
	}

	void peek(){
		node *temp=head;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
};

int main(){
	linked_list a;
	a.insertion(5,1);
	a.insertion(6,2);
	a.insertion(7,0);
	a.peek();

	getch();
}