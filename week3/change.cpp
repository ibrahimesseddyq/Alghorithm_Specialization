#include <iostream>

int get_change(int m) {
  int change[3]={1,5,10};
  int i=2;
  int count=0;
  while(m>0){
  	if(m<=0){
  		break;
	  }
  	if(m-change[i]>=0){
  		m -= change[i];
		count++; 
	  }else if(m-change[i] < 0){
	  	i--;
	  }
  }
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
