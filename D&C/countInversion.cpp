#include<bits/stdc++.h>

using namespace std;

#define INF 99999999

int _merge(int array[], int p, int q, int r){
    int count = 0;
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1], R[n2+1];

    for (int i=0;i<n1;i++){
        L[i] = array[p+i];
    }
    for (int j=0;j<n2;j++){
        R[j] = array[q+j+1];
    }
    L[n1] = INF;
    R[n2] = INF;
    
    int i=0,j=0;

    while(p<=r){
        if(L[i]<R[j]){
            array[p++] = L[i++];
        }else{
            count += (n1-i);
            array[p++] = R[j++];
        }
    }
    return count;
}

int merge_sort(int array[], int i, int j){
    int count = 0;
    if (i<j){
        int mid = (i+j)/2;
        count += merge_sort(array, i, mid);
        count += merge_sort(array, mid+1, j);
        count += _merge(array, i, mid, j);
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int result = merge_sort(array,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl<<result<<endl;
    

    //cout<<countInversion(array,0,n-1)<<endl;

    return 0;
}