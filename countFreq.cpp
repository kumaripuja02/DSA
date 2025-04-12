// Program to count frequency of each element in the array
#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << "  " << count << endl;
    }
}
int main()
{
    int arr[] = {10, 5, 10, 15, 5};
    countFreq(arr, 5);
    return 0;
}