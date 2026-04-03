#include<bits/stdc++.h>
using namespace std;

vector<int> rotate_left(vector<int> arr,int k){
    k=k % arr.size();
   int arr2[arr.size()]={0};
    int j=0;

    for(int i=0;i<k;i++){
        arr2[i] = arr[i];
    }

    for(int i=k;i<arr.size();i++){
        arr[j]=arr[i];
        j++;
    }
    j=0;
    for(int i=(arr.size()-k);i<arr.size();i++){
        
        arr[i]=arr2[j];
        j++;
    }

   

}

vector<int> second(vector<int> arr,int k){

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    for(auto it:arr){
        cout<<it<<" ";
    }


}

int main(){

    vector<int> arr={1,2,3,4,5,6,7};
    // rotate_left(arr,3);
    second(arr,3);
}