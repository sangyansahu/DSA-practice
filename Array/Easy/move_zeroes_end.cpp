#include<bits/stdc++.h>
using namespace std;





void move_zeroes(vector<int> arr){
    int count=0;
    vector<int> arr2;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != 0){
            arr2.emplace_back(arr[i]);
        }
        else{
            count++;
        }
    }
    
    while (count--)
    {
        arr2.emplace_back(0);
    }

    for(auto it:arr2){
        cout<<it<<" ";
    }
    

}


void move_zeroes_striver(vector<int> arr){

    vector<int> arr2(arr.size(),0);
    int index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] !=0 ){
            arr2[index]=arr[i];
            index++;
        }
    }

    for(int i=0;i<arr.size();i++){
        arr[i]=arr2[i];
    }
     for(auto it:arr2){
        cout<<it<<" ";
    }
    

}


void optimized(vector<int> arr){
   int j=-1;
   for(int i=0;i<arr.size();i++){
    if(arr[i] ==0){
        j=i;
        break;
    }
   }

   if(j==-1){
    return;
   }

   for(int i=j+1;i<arr.size();i++){
    if(arr[i] !=0 ){
        swap(arr[i],arr[j]);
        j++;
    }
   }

    for(auto it:arr){
        cout<<it<<" ";
    }
    

}


int main(){

    vector<int>arr={1,0,2,3,0,4,0,1};
    optimized(arr);

}