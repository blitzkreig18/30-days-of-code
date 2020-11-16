#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       /* int res = INT_MIN;
        int n = nums.size();

        if(n==1)
            return nums[0];

        for(int i=0; i<n; i++)
        {
            int prod = 1;
            for(int j=i; j<n; j++)
            {
                prod = prod*nums[j];
                res = max(res,prod);
            }
        }

        return res;
        */

        int maxi = 1;
        int mini = 1;
        int res = INT_MIN;
        int n = nums.size();

        if(n == 1)
            return nums[0];


        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                maxi = 1;
                mini = 1;
                res = max(res,0);
            }
            else
            {
                int a = nums[i]*maxi;
                int b = nums[i]*mini;

                maxi = max(max(a,b),nums[i]);
                mini = min(min(a,b),nums[i]);

                res = max(max(maxi,mini),res);
                cout<<"maxi"<<maxi<<" mini"<<mini<<"\n";
                cout<<"res"<<res<<"\n";
            }

        }
        return res;

    }
};

int main()
{
    return 0;
}

/*
Python3
#User function Template for python3
from math import inf
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self,arr, n):
		# code here
		maxi = 1
		mini = 1
		res  = -inf
		for i in range(0,n,1):
		    if (arr[i] == 0):
		        maxi = 1;
		        mini = 1;
		        res = max(res,0)
		    else:
		        a = arr[i]*maxi
		        b = arr[i]*mini
		        maxi = max(max(a,b),arr[i])
		        mini = min(min(a,b),arr[i])
		        res = max(max(maxi,mini),res)

		return res




*/
