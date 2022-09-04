#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int data){
		this->data=data;
		next=NULL;
		} 
	};
		void print(node*head){
			while(head!=NULL){
				cout<<head->data<<"->";
				head= head->next;
			}
			
		}
		
		int main(){
			node*n1=new node(1);
				node*head=n1;
			node*n2=new node(2);
			node *n3=new node(3);
			n1->next=n2;
			print(head); 
			  return 0;
			  }
		
		
			

