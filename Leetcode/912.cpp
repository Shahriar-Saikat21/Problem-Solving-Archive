#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums,int left,int mid,int right){

        int leftArraySize = mid - left+1;
        int rightArraySize = right-mid;

        int leftArray[leftArraySize+1];
        int rightArray[rightArraySize+1];
    
        for (int i = 0; i < leftArraySize; i++)
        {
            leftArray[i] = nums[left+i];
        }
        leftArray[leftArraySize] = INT_MAX;

        for (int i = 0; i < rightArraySize; i++)
        {
            rightArray[i] = nums[mid+1+i];
        }
        rightArray[rightArraySize] = INT_MAX;

        int leftArrayIndicator = 0;
        int rightArrayIndicator = 0;

        while(left<=right){
            if(leftArray[leftArrayIndicator]<rightArray[rightArrayIndicator]){
                nums[left++] = leftArray[leftArrayIndicator++];
            }else{
                nums[left++] = rightArray[rightArrayIndicator++];
            }
        }

    }

    void mergeSort(vector<int>& nums,int left,int right){
        if(left<right){
            int mid = (left+right)/2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};