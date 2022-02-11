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

int main()
{
    while(true){
        int n= rand() % 10 + 2;
        cout << n << "\n";
        vector<int> a;
        for(int i=0;i<n;i++){
            a.push_back(rand() % 1000000);
        }
        for(int i=0;i<n;i++){
            cout<< a[i] <<' ';
        }
        cout<<"\n";
        long long res1=MaxPairWise(a);
        long long res2=max(a);
        if(res1 != res2){
            cout<<"Wrong answer"<< res1<< "  " << res2<<"\n";
            break;
        }
        else{
            cout<<"OK"<<"\n";
        }
    }
    
}