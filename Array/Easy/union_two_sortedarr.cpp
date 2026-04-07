#include<bits/stdc++.h>
using namespace std;


vector<int> unionof_arr(vector<int> arr1,vector<int> arr2){

    map<int,int> mp;
    for(int i=0;i<arr1.size();i++){
        mp[arr1[i]]++;
    }
    for(int i=0;i<arr2.size();i++){
        mp[arr2[i]]++;
    }


    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;;
    }



}


vector<int> two_pointer(vector<int> arr1,vector<int> arr2){

    vector<int> result;
    int i=0,j=0;
    int n=arr1.size()-1;
    int m=arr2.size()-1;
    while ((i <=n) && (j<=m))
    {
        if(arr1[i]<arr2[j]){
            if(result.empty() || result.back() != arr1[i]){
            result.emplace_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(result.empty() || result.back() != arr2[i]){
            result.emplace_back(arr2[i]);
            }
            j++;

        }
        else if(arr1[i]==arr2[j]){
             if(result.empty() || result.back() != arr1[i]){
            result.emplace_back(arr1[i]);
            }
            i++;
            j++;
        }


    }
    
    while(i<=n){
        if(result.empty()||result.back() !=  arr1[i]){
            result.emplace_back(arr1[i]);
        }
        i++;
    }
    
    while(j<=m){
        if(result.empty()||result.back() !=  arr2[j]){
            result.emplace_back(arr2[j]);
        }
        j++;
    }

    for(auto it:result){
        cout<<it<<" ";
    }

    

}

// vector<int> unionof_arr(vector<int> arr1,vector<int> arr2){
//     set<int> s;

//     for(int i=0;i<arr1.size();i++){
//         s.emplace(arr1[i]);
//     }

//     for(int i=0;i<arr2.size();i++){
//         s.emplace(arr2[i]);
//     }



//     for(auto it:s){
//         cout<<it<<" ";
//     }
    
//     vector<int> arr3(s.begin(),s.end());
//     return arr3;

// }





int main(){

    vector<int> arr1={1,2,3,4};
    vector<int> arr2={2,3,4,4,5};
    // unionof_arr(arr1,arr2);
    // unionof_arr(arr1,arr2);
    two_pointer(arr1,arr2);

}