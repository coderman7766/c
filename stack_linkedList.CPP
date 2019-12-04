#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next;
};
class linked_list{
	private:node *head,*tail;
	public:linked_list(){
		head=NULL;
		tail=NULL;
	}

	void insertion(int num){
		node *temp=new node();
		temp->data=num;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}

	void deletion(){
		node *previous=new node();
		node *current=new node();
		current=head;
		previous=NULL;
		while(current->next!=NULL){
			previous=current;
			current=current->next;
		}
		tail=previous;
		previous->next=NULL;
		delete current;
	}

	void display(){
		node *temp;
		temp=head;
		cout<<"Updated List:";
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<"\nPress Enter\n";
	}

};
int main(){
	int n=0,m;
	linked_list a;
	
	while(n<3){
	cout<<"Menu(Enter index no)\n1:Insertion , 2:Deletion , 3:To exit the program\n";
	cin>>n;
	switch(n){
		case 1:cout<<"Enter Value: ";cin>>m;a.insertion(m);break;
		case 2:cout<<"";a.deletion();break;
		case 3:break;
	}
	a.display();
	
}
	getch();
}