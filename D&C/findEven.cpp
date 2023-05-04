#include <bits/stdc++.h>

using namespace std;

int countEven(int Arr[], int i, int j)
{
    if (i == j){ // array size 1
        if (Arr[i] % 2 == 0)
            return 1;
        else
            return 0;
    }else{
        int mid = (i + j) / 2;
        int c1 = countEven(Arr, i, mid);     // solution to the first half
        int c2 = countEven(Arr, mid + 1, j); // solution to the second half
        return c1 + c2;
    }
}

int main()
{

    int array[7] = {1, 2, 3, 4, 5, 6,-1};

    int result = countEven(array, 0, 6);

    cout << result << endl;

    return 0;
}

// count odd
// count prime num- use isPrime func
// count good num - isGood func
// sum of evenNum