#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>v, int low, int high, int key){
    if(high<low)return -1; ///-1 means not found
    if(v[low]==key)return low;
    return linear_search(v,low+1,high,key);

}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int low, high;
    cout<< "Enter low and hight value"<<endl;   ///which is denoted by starting value and final values
    cin>>low >>high;
    cout<< "Enter which element you want to search:"<<endl;
    int key;
    cin>>key;
    int ans=linear_search(v,low,high,key);
    if(ans==-1){
        cout<< "Not found"<<endl;
    }
    else {
        cout<<  "The index is:"<<ans<<endl;
    }
}
