#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;



int minCoins(int cset[], int n, int target)
{

    if(target == 0)
        return 0;
    if(n == 0 && target != 0)
        return INT_MAX;

    if(cset[n-1] > target)
    {
        return minCoins(cset, n-1, target);
    }
    if(cset[n-1] <= target)
    {
        return min(minCoins(cset, n, target-cset[n-1])+1, minCoins(cset, n-1, target));

    }


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
        int targ;
        cin>>targ;

        int res = minCoins(arr, n, targ);
        cout<<res<<"\n";
    }
}
