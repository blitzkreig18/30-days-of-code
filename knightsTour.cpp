#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printMatrix(int n, int arr[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }
}

int main()
{
    int x;
    cin>>x;
    int arr[x][x];
    int a = 1;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            arr[i][j] = a;
            a++;
        }
    }

    printMatrix(x, arr);
    return 0;

}
