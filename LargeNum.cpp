//Program to find the largest number in an array
//Time Complexity : O(N)
//Space Complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
//Function to find the largest number in an array
int LargestNum(vector<int>&arr)
{
int max=0;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]>max)
    max=arr[i];
}
return max;
}
//Main function
int main()
{
    vector<int>arr;
    int n, num;
    cout<<"Enter the size of an array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter no."<<endl;
        cin>>num;
        arr.push_back(num);
    }
    int ans= LargestNum(arr);
    cout<<endl<<"Largest Number is: "<<ans;
    return 0;
}