#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	struct node{
		int data;
		node *next;
	};
	//main programe
	int n,num,pos;
	cout<<"Number of elements";
	cin>>n;
	node *head,*tail;
	head=NULL;
	for(int i=0;i<n;i++){
		node *temp=new node();
		cin>>num;
		temp->data=num;
		temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}}
	/*
	//insertion
	cout<<"Position:";
	cin>>pos;
	node *previous,*current=head;
	node *temp=new node();
	for(int i=1;i<pos;i++){
		previous=current;
		current=current->next;
	}
	temp->data=66;
	previous->next=temp;
	temp->next=current;
	*/
	

	node *temp1=new node();
	temp1=head;
	while(temp1!=NULL){
		cout<<temp1->data;
		temp1=temp1->next;
	}

node *current=head,*previous=NULL,*next=NULL;
	
	while(current!=NULL){
		next=current->next;
		current->next=previous;
		previous=current;
		current=next;
	}
	head=previous;
	node *temp=new node();
	temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}

getch();
}