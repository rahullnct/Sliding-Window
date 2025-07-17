#include<iostream>
using namespace  std;
int solve(int arr[11], int n,int k)
{
    int left=0,right=0,maxi=0,zero=0;
    while(right<n)
    {
        if(arr[right]==0)
        {
            zero++;
        }
        while(zero>k)
        {
            if(arr[left]==0)
            {
              zero--;
            }
            left++;
        }
        if(zero<=k)
        {
            maxi=max(maxi,right-left+1);
        }
        right++;
    }
    return maxi;
}
int main()
{
  int arr[11]={0,1,1,0,0,1,1,1,1,1,0};
  int n=11;
  int k=2;
  int ans=solve(arr,n,k);
  cout<<ans;    
}
