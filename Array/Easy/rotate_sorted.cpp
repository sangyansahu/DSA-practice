#include<bits/stdc++.h>
using namespace std;


bool isRotated_Sorted(vector<int> arr){

    int count=0;
    int n=arr.size();
    
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }

    if(count<=1){
        return true;
    }
    else{
        return false;
    }


}



int main(){

    vector<int> arr={5,2,3,4,1};
    cout<<isRotated_Sorted(arr);



}