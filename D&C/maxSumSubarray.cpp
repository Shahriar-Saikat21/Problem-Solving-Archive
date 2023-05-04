#include<bits/stdc++.h>

using namespace std;

#define INF -99999999

int crossSubSum(int array[],int low,int mid, int hi){
    int lsum = INF, rSum = INF,sum = 0;
    for (int i = mid; i >=low; i--)
    {
        sum+= array[i];
        if(sum>lsum){
            lsum = sum;
        }
    }

    sum = 0;

    for (int i = mid+1; i <hi ; i++)
    {
        sum+= array[i];
        if(sum>rSum) rSum = sum;
    }

    return lsum+rSum;    
}

int maxSubSum(int array[],int low,int hi){
    if(low==hi) return array[low];
    else{
        int mid = (low+hi)/2;
        int lss = maxSubSum(array,low,mid);
        int rss = maxSubSum(array,mid+1,hi);
        int css = crossSubSum(array,low,mid,hi);
        if(lss>= css && lss>=rss) return lss;
        else if(rss>=css && rss>=css) return rss;
        else return css;
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

    cout<<maxSubSum(array,0,n-1)<<endl;

    return 0;
}