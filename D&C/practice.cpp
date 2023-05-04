#include<bits/stdc++.h>

using namespace std;

int sumArray(int array[],int i, int j){
    if(i==j){
        if(array[i]%2!=0) return array[i];
        else return 0;
    }else{
        int mid = (i+j)/2;
        int c1 = sumArray(array,i,mid);
        int c2 = sumArray(array,mid+1,j);
        return c1+c2;
    }   
}

int countOdd(int array[],int i, int j){
    if(i==j){
        if(array[i]%2!=0) return 1;
        else return 0;
    }else{
        int mid = (i+j)/2;
        int c1 = countOdd(array,i,mid);
        int c2 = countOdd(array,mid+1,j);
        return c1+c2;
    }   
}

bool isPrime(int n){
    if(n==1 || n==0) return false;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0) return false;
    }
    return true;
    
}

int sumPrime(int array[],int i, int j){
    if(i==j){
        if(isPrime(array[i])) return array[i];
        else return 0;
    }else{
        int mid = (i+j)/2;
        int c1 = sumPrime(array,i,mid);
        int c2 = sumPrime(array,mid+1,j);
        return c1+c2;
    }   
}

int findMax(int array[],int i, int j){
    if(i==j){
        return array[i];
    }else{
        int mid = (i+j)/2;
        int c1 = findMax(array,i,mid);
        int c2 = findMax(array,mid+1,j);
        return max(c1,c2);
    }
}

int main(){

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<findMax(array,0,n-1)<<endl;
    
    return 0;
}