
Given n size arr, and t quries, get the result of numbers from l to r.
Input
5                  > "arr size"
1 2 3 4 5          > "arr"
2                  > "Number of quries"
3 5                > "First range"
1 4                > "2nd range"


Output
12
10


#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    int sum[size];
    for (int i=0; i<size; i++){
        cin>>arr[i];
        if(i==0)
            sum[i] =  arr[i];
        else
            sum[i] = sum[i-1] + arr[i];
    }

    int t, l , r;
    cin>>t;
    int result[t];
    for (int i=0; i<t; i++){
        cin >> l >> r;
        //To get the indexes
        l--;
        r--;
        if (l==0){
            result[i] = sum[r];
        }

        else{
            result[i] =  sum[r] - sum[l-1];
        }
    }

    for (int i=0; i<t; i++){
        cout << result[i]<<endl;
    }

    return 0;
}
