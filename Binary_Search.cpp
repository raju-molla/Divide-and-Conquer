#include<bits/stdc++.h>
using namespace std;

 int Binary_Search(vector<int>v, int low, int high, int key)
 {
     if(high<low)return low-1;
     int mid=floor(low+((high-low)/2));
     if(v[mid]==key)return mid;
     else if(v[mid]<key)return Binary_Search(v,mid+1,high,key);
     else return Binary_Search(v,low,mid-1,key);
 }

int main()
{
    int n;
    cin>>n;     /// n is array size

    vector<int>v(n);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int low=1;
    int high=n-1;
    int key;
    cin>>key;   ///key is which element want to search
    int ans=Binary_Search(v,low,high,key);
    cout<<ans<<endl;    ///if in ans array key is not fount then the solution gives us where the value insert in right place
}
