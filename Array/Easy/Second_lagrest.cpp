#include <bits/stdc++.h>
using namespace std;


int secondlargest(vector <int> arr){

    int largest= arr[0];
    int secondlargest=arr[0];

    for(int i=0;i<arr.size();i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] !=largest && secondlargest<arr[i] ){
            
                secondlargest=arr[i];
            
        }
    }

    return secondlargest;
}



int optimized_secondlargest(vector <int>arr){

    int largest=INT16_MIN;
    int secondlargest=INT16_MIN;
    if(arr.size()<2){
        cout<<"The size of array is less than 2";
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            
            secondlargest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]>secondlargest && secondlargest !=largest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}   


int main(){

    vector<int> arr={1,6,9,7,2,3};
    
    cout<<secondlargest(arr);
    cout<<endl;
    cout<<optimized_secondlargest(arr);


}

