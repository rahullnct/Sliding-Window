//longest length of the subarray/substring where the condition given condition by using sliding window
#include<iostream>
using namespace std;
int solve(int arr[10],int k,int n)
{
     int left=0,right=0,maxi=0,sum=0;
    while(right<n)
    {
     sum+=arr[right];
     while(sum>k)
     {
        sum=arr[left];
        left++;
     }      
     if(sum<k)
     {
        maxi=max(maxi,right-left+1);
     }
     right++;
    }
    return maxi;
}
int main()
{
    int arr[10]={1,1,0,0,1,0,1,1,0,0};
    int k=4;
    int n=11;
    int ans=solve(arr,k,n);
    cout<<ans;
}