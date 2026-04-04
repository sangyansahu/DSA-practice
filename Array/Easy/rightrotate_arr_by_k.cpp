#include<bits/stdc++.h>
using namespace std;


int rightrotate(vector<int> arr,int k){
    
    int n=arr.size();
    k=k%n;
    int arr2[k]={0};
    
    int j=0;
    for(int i=(n-k);i<n;i++){
        arr2[j]=arr[i];
        j++;
    }

    for(int i=k;i>=0;i--){
        arr[i+k]=arr[i];
    }

    for(int i=0;i<k;i++){
        arr[i]=arr2[i];
    }

    for(auto it:arr){
        cout<<it<<" ";
    }


 
}

void reverseArr(vector<int> &arr,int st,int end){

    int temp=0;
    while(st<end){
        temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }

}
int op_right_rotate(vector<int>arr,int k){
    int n=arr.size();
    reverseArr(arr,0,n-1);
    reverseArr(arr,0,k-1);
    reverseArr(arr,k,6);

     for(auto it:arr){
        cout<<it<<" ";
    }



}


int main(){

    vector<int> arr={1,2,3,4,5,6,7};
    // rightrotate(arr,3);
    op_right_rotate(arr,3);

}