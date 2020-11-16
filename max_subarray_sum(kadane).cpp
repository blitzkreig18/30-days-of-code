#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){

    // Your code here
    int maxi = INT_MIN;
    int max_till_here = 0;
    for(int i=0; i<n; i++)
    {
        max_till_here = max(arr[i], arr[i]+ max_till_here);
        maxi = max(maxi, max_till_here);
    }
    return maxi;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<maxSubarraySum(arr, n)<<"\n";
    }
    return 0;
}
