#include<bits/stdc++.h>

using namespace std;

#define INF 99999999

void printArray(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
}

void mergeArray(int A[], int B[], int temp[],int m,int n, int j){
    int arrayA[m+1], arrayB[n+1];

    for (int i = 0; i < m; i++)
    {
        arrayA[i] = A[i];
    }
    arrayA[m] = INF;

    for (int i = 0; i < n; i++)
    {
        arrayB[i] = B[i];
    }
    arrayB[n] = INF;

    int q = 0, w = 0;

    for (int i = 0; i < j; i++)
    {
        if(arrayA[q]<arrayB[w]){
            temp[i] = arrayA[q++];
        }else{
            temp[i] = arrayB[w++];
        }
    }
   
}

int main(){

    int m,n;
    cin>>m>>n;

    int A[m],B[n],temp[m+n];

    for (int i = 0; i < m; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
    }

    mergeArray(A,B,temp,m,n,m+n);

    for (int i = 0; i < m+n; i++)
    {
        cout<<temp[i]<<" ";
    }
    

    return 0;
}