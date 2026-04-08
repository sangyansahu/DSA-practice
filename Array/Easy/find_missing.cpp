#include<bits/stdc++.h>
using namespace std;


int findmissing(vector<int> arr){
    int n=arr.size()+1;
    int sum=0;
    while (n>=0)
    {
        sum=sum+n;
        n--;
    }
    
    for(int i=0;i<arr.size();i++){
        sum=sum-arr[i];
    }
    return sum;

}

int find_missing_exor(vector<int> arr){
    int xor1=0;
    int xor2=0;
    int n=arr.size()+1;
    for(int i=0;i<n-1;i++){
        xor2 ^= arr[i];
    }
    for(int i=1;i<=n;i++){
        xor1 ^= i;
    }

    int missing= xor1^xor2;
    return missing;
}


int find_missing_hash(vector<int> arr){

    int n=arr.size()+1;
    vector<int>hash(n+1,0);

    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}


int main(){

    vector<int> arr={1,2,6,4,5};
    // findmissing(arr);
    // cout<<findmissing(arr);
    // cout<<find_missing_hash(arr);
    cout<<find_missing_exor(arr);
}