#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
};
class linked_list{
	private: node *head,*tail;
	public:linked_list(){
		head=NULL;
		tail=NULL;
	}
	void add_node(int num){
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
		node *temp=new node;
		temp=head;
		head=head->next;
		delete temp;
	}

	void display(){
		node *temp=new node();
		temp=head;
		cout<<"Updated List : ";
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<"\nPress Enter\n";
		getch();
	}
};
int main(){
	int n=0,m;
	linked_list a;
	cout<<"Menu(Enter index no)\n1:Insertion , 2:Deletion , 3:To exit the program\n";
	while(n<3){
	
	cin>>n;
	switch(n){
		case 1:cout<<"Enter Value: ";cin>>m;a.add_node(m);break;
		case 2:cout<<"";a.deletion();break;
		case 3:break;
	}
	a.display();
	
}
	getch();
}