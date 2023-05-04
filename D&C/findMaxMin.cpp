#include <bits/stdc++.h>

using namespace std;

struct Res{
    int mx,mn;
};

Res findMaxMin(int array[],int i, int j){
    if(i=j){
        return {array[i],array[i]};
    }else{
        int mid = (i+j)/2;
        Res res1 = findMaxMin(array,i,mid);
        Res res2 = findMaxMin(array,mid+1,j);
        int mx = max(res1.mx, res2.mx);
        int mn = min(res1.mn, res2.mn);
        return {mx, mn}; 
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

    
    

    return 0;
}