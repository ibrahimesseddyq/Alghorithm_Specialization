#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>   // std::greater
#include <algorithm>    // std::sort
using std::vector;
bool compare(int i ,int j){
	return i<j;
}
long long max_dot_product(vector<int> a, vector<int> b) {
	
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);
	sort(a.begin(),a.end(),compare);
	sort(b.begin(),b.end(),compare);

  
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
