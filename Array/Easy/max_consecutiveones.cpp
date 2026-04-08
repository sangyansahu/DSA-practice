#include<bits/stdc++.h>
using namespace std;


int maxones(vector<int> arr){

    int count=0;
    int previouscount=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        else if(arr[i]==0){
            previouscount=count;
            count=0;
        }
    }

    return max(count,previouscount);


}

int main(){

    vector<int> arr={1,0,1,0,1};
    cout<<maxones(arr);
}