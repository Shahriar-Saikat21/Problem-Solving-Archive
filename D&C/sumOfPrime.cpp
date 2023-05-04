#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0) return false;
    }
    return true;    
}

int sumPrime(int Arr[], int i, int j)
{
    if (i == j){ 
        if (isPrime(Arr[i]))
            return Arr[i];
        else
            return 0;
    }else{
        int mid = (i + j) / 2;
        int c1 = sumPrime(Arr, i, mid);     
        int c2 = sumPrime(Arr, mid + 1, j); 
        return c1 + c2;
    }
}

int main()
{

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int result = sumPrime(array,0,n-1);

    cout<<"sum is "<<result<<endl;
    

    return 0;
}