#include <bits/stdc++.h>
using namespace std;

int remove(vector<int> arr)
{

    set<int> set;
    int index = 0;
    for (auto it : arr)
    {
        // it is the iterator/ element
        /*  Ex-
            seen = {1, 3}
            Now if we check:
            seen.find(1)
            It finds it.
            But if we check:
            seen.find(5)
            It cannot find it, so it returns:
            seen.end()
        */
        if (set.find(it) == set.end())
        {
            set.insert(it);
            arr[index] = it;
            index++;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return index;
}


int op_remove(vector<int> arr){
    int index=0;
    for(int j=1;j<arr.size();j++){
        if(arr[index] != arr[j]){
            arr[index+1]=arr[j];
            index++;
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return (index+1);

}

int main()
{

    vector<int> arr = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    // cout << remove(arr);
    // cout<<endl;
    cout<<op_remove(arr);
}