#include <iostream>
#include<vector>
#include <cinttypes>
#include <cstdlib>


using namespace std;
long long MaxPairWise(vector<int> vec){
    int n=vec.size();
    int max1=0;
    int max2=0;
    int j=0;
    int res=0;
    int index1=0;
    int index2=0;
    while(j<n){
        if(vec[j]>max1){
            max1=vec[j];
            index1=j;
        }
        j++;
    }

    int i=0;
    while(i<n){
        if(vec[i]>max2 && (i != index1)){
            max2=vec[i];
            index2=i;
        }
        i++;
    }
    return (long long)max1 * (long long)max2;
}
int main()
{
    vector<int> array(4);
    int n;
    int i=0;
    int j=0;
    int res=0;
    cin>> n;
    while(i<n){
     cin>> array[i];
     i++;
    }
    cout<< MaxPairWise(array);
    
    
}