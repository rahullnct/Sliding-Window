#include<iostream>
#include<map>
using namespace std;
int solve(int arr[5], int k,int n)
{
      int left=0,right=0,maxi=0;
      map<int,int>mp;
      while(right<n)
      {
        mp[arr[right]]++;
        if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                mp[arr[left]]--;
                if(mp[arr[left]]==0)
                {
                    mp.erase(arr[left]);
                }
                left++;
            }
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
    int k=2;
    int ans=solve(arr,k,5);
    cout<<ans;
    
}