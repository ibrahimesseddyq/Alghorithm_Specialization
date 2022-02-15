#include <iostream>
#include <cassert>
#include<vector>

	using namespace std;
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

size_t fibonacci_fast(int n) {
    vector<size_t> list={0,1};
	if(n<2){
		return list[n];
	}
    size_t result=0;
    for(int i=2;i<=n;i++){
    	result= list[i-2]+list[i-1];
    	list.insert(list.end(),result);
	}
    return list[list.size()-1];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    cin >> n;

    cout << fibonacci_fast(n)  << '\n';
    //test_solution();
    //std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
