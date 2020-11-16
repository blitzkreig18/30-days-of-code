#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set <vector <int>> res;

void func(vector <int> arr, int n, int pos, int target, vector <int> cur)
{

    if(target == 0)
    {
        //sort(cur.begin(),cur.end());
        res.insert(cur);
        return;
    }

    if(target!=0 && pos==n)
    {
        return;
    }

    if(target<0)
    {
        return;
    }

    cur.push_back(arr[pos]);
    func(arr, n, pos, target-arr[pos], cur);
    cur.pop_back();
    func(arr, n, pos+1, target, cur);

}

int main()
{
    vector <int> arr = {1,2,3,23,83,3};
    int k = 83;
    vector <int> cur;
    func(arr, 6, 0, 83, cur);

    for(auto c : res)
    {
        for(auto x : c)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    cout<<res.size()<<"\n";
    return 0;
}
