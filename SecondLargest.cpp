#include<bits/stdc++.h>
using namespace std;
int SecondLargestNum(vector<int>&arr, int n)
{
if(n<2)
return -1;
int large=INT_MIN, secondLarge= INT_MIN;
for(int i=0; i<n ;i++)
large=max(large,arr[i]);
for(int i=0; i<n ;i++)
if(arr[i]>secondLarge &&arr[i]!=large)
secondLarge=arr[i];
return secondLarge;
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
    int ans= SecondLargestNum(arr,n);
    cout<<endl<<"Largest Number is: "<<ans;
    return 0;
}