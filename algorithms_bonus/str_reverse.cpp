#include <iostream>

using namespace std;
void revstr(char * str){
	int i=0;
	while(str[i] !=NULL){
		i++;
	}
	while(i>=0){
		cout<<str[i];
		i--;
	}

		
}
int main(){
	char str[10]="Hello";
	revstr(str);
	
}
