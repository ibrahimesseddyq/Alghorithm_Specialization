#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node * next;
};
class Stack  {
	public:
		Stack(){
			top = 0;
			head=NULL;
			count =0;
		};
		void push(){
			node *nodeptr=new node();
		};
		int top;
		node * head;
		int count;
};


