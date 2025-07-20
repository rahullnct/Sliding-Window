#include<iostream>
using namespace  std;
#include<map>
int solve(int arr[5], int n,int k)
{
    int left=0,right=0,maxi=0;
    map<int,int>mp; //use unordered map
    while(right<n)
    {
      mp[arr[right]]++;
      if(mp.size()>k)
      {
        mp[arr[left]]--;
        if(mp[arr[left]]==0)
        {
            mp.erase(arr[left]);
        }
        left++;
      }
      if(mp.size()<=k)
      {
        maxi=max(maxi,right-left+1);
      }
      right++;
    }
    return maxi;
}
int main()
{
  int arr[5]={1,2,3,2,2};
  int n=5;
  int k=2;
  int ans=solve(arr,n,k);
  cout<<ans<<endl;
} 