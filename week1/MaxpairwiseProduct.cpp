#include <iostream>
#include<vector> 

using namespace std;

long long max(vector<int> array){
    int i = 0;
    int j = 0;
    int n = array.size();
    long long result = 0;
    while(i < n){
        j=i + 1;
        while(j < n){
            if((long long)array[i] * (long long)array[j] > result){
                result = (long long)array[i] * (long long)array[j];
            }
            j++;
        }

        i++;
    }
    return result;
}