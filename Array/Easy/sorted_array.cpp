#include<bits/stdc++.h>
using namespace std;


bool isSorted (vector <int> arr){
    for(int i=0;i<arr.size()-1;i++){
        
        for(int k=i+1;k<arr.size();k++){
            if(arr[i]>arr[k]){
                    return false;
            }
        }
    }

    return true;

}

bool op_isSorted(vector<int> arr){

    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    

    return true;

}




int main(){

    vector<int> arr={1,3,9,20,4,0};
    if(op_isSorted(arr)){
        cout<<"The vecotr is sorted ";
    }
    else{
        cout<<"The vector is not sorted ";
    }


}