#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node * left;
	node * right;
};
node* newNode(int value){
	node * ptr1=new node();
	ptr1->data=value;
	ptr1->left=NULL;
	ptr1->right=NULL;
	return ptr1;
}
node* Insert(node* root,int value ){

	if(root == NULL){
		node * ptr1=newNode(value);
		root=ptr1;
		return root;	
	}else{
		if(value<root->data){
			root->left = Insert(root->left,value);
			return root;
		}else{
			root->right = Insert(root->right,value);
			return root;
		}
	}
}
void printls(node* root){
	if(root != NULL){
		cout<<root->data<<" ";
	
	printls(root->left);
	cout<<endl;
	printls(root->right);
	}
	return;
}
int main(){
	string str;
	node* rootptr;
	rootptr=NULL;
	rootptr=Insert(rootptr,6);
	rootptr=Insert(rootptr,9);
	rootptr=Insert(rootptr,2);
	rootptr=Insert(rootptr,7);
	rootptr=Insert(rootptr,1);
	rootptr=Insert(rootptr,4);
	rootptr=Insert(rootptr,15);
	rootptr=Insert(rootptr,20);
	printls(rootptr);
}
