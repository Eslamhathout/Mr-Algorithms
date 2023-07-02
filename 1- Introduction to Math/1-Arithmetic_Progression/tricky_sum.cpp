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
Note
The answer for the first sample is explained in the statement.











#include <iostream>
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
using namespace std;
#include <math.h>



ll arithmetic_sum(ll a1,ll an,ll n)
{
    return ((a1+an)*n)/2;
}

ll power_sum(ll n)
{
    ll sum = 0;
    ll i =0;

    while(sum<=n){
        sum = sum + pow(2, i);
        i = i+1;
    }

    return sum;
}


int main()
{
    int t;
    cin>>t;
    long long n[t];
    ll result;

    for (int i=0; i<t; i++){
        cin>>n[i];
    }
    for (int i=0; i<t; i++){
            if (n[i] == 1){
                cout<<-1<<endl;
            }
            else{
                result = arithmetic_sum(1,n[i],n[i]);
                result -= power_sum(n[i])*2;
                cout<<result<<endl;
            }

    }
    return 0;
}
