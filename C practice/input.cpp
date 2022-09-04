#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		next=NULL;
	}	
};
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL";
}
node* takeinput(){
	int data;
	cin>>data;
	node*head=NULL;
	node*tail=NULL;
	while(data!=-1){
		node*n=new node(data);
		if(head==NULL){
			head=n;
			tail=n;
		}else{
			n->next=head;
			head=n;
		}
		cin>>data;
	}
	return head;
}
int main(){
	node*head=takeinput();
	print(head);
	return 0;
}
