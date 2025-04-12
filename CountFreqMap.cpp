//Count frequency of elements using map
#include<bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    //to traverse through map
    for(auto it:map){
cout<<it.first<<"  "<<it.second<<endl;
    }
}
int main()
{
    int arr[]={10,5,10,15,5};
    countFreq(arr,5);
    return 0;
}