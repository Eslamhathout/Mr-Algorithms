https://codeforces.com/problemset/problem/598/A


A. Tricky Sum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.

For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.

Calculate the answer for t values of n.

Input
The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.

Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

Output
Print the requested sum for each of t integers n given in the input.

Examples
inputCopy
2
4
1000000000
outputCopy
-4
499999998352516354












// #include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define dd  ll n; cin >> n; ll arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
#define rr  int arr2[n]; for(int i=0 ; i<n ; i++)cin>>arr2[i];
#define tt  for(int i=0 ; i<n ; i++)cout << arr[i] << " ";
using namespace std;
#include <cmath>


int main()
{
    int arr[4];
    double n5;
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    //If arithmetic
    int d = arr[1] - arr[0];
    // Geometric 
    double q = arr[1] / double(arr[0]);

    if (arr[2] == (arr[0]+(2*d)) && arr[3] == (arr[0]+(3*d))){
        n5 = arr[0] + (4*d) ;
        if ((ll)n5 == n5){
            cout<<n5<<endl;
        }
        else{
            cout<<42<<endl;
        }
    }
    //If Geometric
    else if (arr[2] == (arr[1]*q) && arr[3] == (arr[2]*q)){
        n5 = arr[3]*q;
        if ((ll)n5 == n5){
            cout << n5<<endl;
        }
        else{
            cout<<42<<endl;
        }
    }
    else{
        cout<<42<<endl;
    }

}
