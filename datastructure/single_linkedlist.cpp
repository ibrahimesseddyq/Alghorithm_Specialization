#include <iostream>

using namespace std;
class node{
	public:
	int data;
	node* next;
};
node* getNewNode(int value){
	node* nodeptr=new node();
	nodeptr->data=value;
	nodeptr->next=NULL;
	return nodeptr;
}
node* insertEnd(node* head,int value){
	node* nodeptr = getNewNode(value);
	if(head == NULL){
		head = nodeptr;
	}else{
		node* temp ;
		temp= head;
		while(temp->next != NULL){
			 temp=temp->next;
		}
		temp->next=nodeptr;
	}
	return head;
}
void printls(node* head){
	node* traversal = head;
		if(traversal == NULL)return;
	cout<<traversal->data;
	printls(traversal->next);
}
node* insertAtHead(node *head,int value){
	node * nodeptr= getNewNode(value);
	node * headnext= head;
	head= nodeptr;
	nodeptr->next=headnext;
	return head;
}
node * insertAt(node* head,int value,int n){
	node* nodeptr = getNewNode(value);
	node* temp;
	if(n == 0){
		temp= head->next;
		head = nodeptr;
		nodeptr->next=temp;
		return head;
	}else{
		temp = head;
		for(int i=0;i<n-1;i++){
			if(temp->next == NULL){
				temp->next=nodeptr;
				return head;
			}
			temp=temp->next;
		}
		if(temp->next==NULL){
			temp->next=nodeptr;
		}else{
			node* temp1;
			temp1=temp->next;
			nodeptr->next=temp1;
			temp->next=nodeptr;
		}
	}
	return head;
	
}
node * CreateLinkedls(node *head,int nbr){
	int n;
		for(int i=0;i<nbr;i++){
			cin>> n;
			head =insertEnd(head,n);
		}
		return head;
}
node * ArrayToLinkedlist(node *head,int array[],int nb){
	int n= nb;
	for(int i=0;i<nb;i++){
		head =insertEnd(head,array[i]);
	}
	return head;
}
int countNodes(node *head){
	node* trav;
	trav=head;
	int i=1;
	while(trav->next != NULL){
		i++;
		trav=trav->next;
	}
	return i;
}
void printReverse(node* head){
	node* ptr=head;
	if(ptr == NULL){
		return;
	}
	printReverse(ptr->next);
	cout<<ptr->data;
}
node * deleteAtFirst(node *head){
	node* temp = head;
	head=head->next;
	temp->next=NULL;
	delete temp;
	return head;
}
node * deleteAt(node* head,int nb){
	node*temp=head;
	node*temp1=head;
	temp1=temp1->next;
	temp1=temp1->next;

	for(int i=0;i<nb-1;i++){
		temp=temp->next;
		temp1=temp1->next;
	}
	delete temp->next;
	temp->next=temp1;
	return head;
	
}
node* deleteEnd(node *head){
	node*ptr=head;
	int count=countNodes(head);
	for(int i=0;i<count-2;i++){
		ptr=ptr->next;
	}
	ptr->next= NULL;
	return head;
}
int searchNode(node*head,int value){
	node*ptr=head;
	int i=0;
	while(ptr!=NULL){
		if(value==ptr->data){
			return i;
		}
		ptr=ptr->next;
		i++;
	}
	return -1;
}
int main(){
	node* head=NULL;
	int arr[5]={1,2,3,4,5};
	head = ArrayToLinkedlist(head,arr,5);
	insertAt(head,99,2);
	deleteAt(head,2);
	insertEnd(head,55);
	deleteEnd(head);
	printls(head);
	cout<<endl<<searchNode(head,3);
}