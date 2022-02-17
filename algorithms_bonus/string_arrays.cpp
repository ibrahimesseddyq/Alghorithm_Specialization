// Implement a algorithm to determine if a string has all unique characters, What if you cannot use additionnal datasctructure?
#include <iostream>
using namespace std;
int strlen(char str[]){
	int i=0;
	while(str[i]){
		i++;
	}
	return i;
}
// time complexity worst case = O(n) ; space Complexity = O(1)
bool isUnique(char str[]){
	bool char1[256]={false};
	int ascii;
	for(int i=0;i<strlen(str);i++){
		ascii=(int)str[i];
		if(char1[ascii]==true){
			return false;
		}
		char1[ascii]=true;
	}
	return true;
}
int main(){
	cout<<isUnique("abcd");
}

