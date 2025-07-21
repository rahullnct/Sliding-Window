#include<iostream>
#include<map>
using namespace  std;
int solve(string &s, int n,int k)
{
    int left=0,right=0,maxi=0;
    map<int,int>mp;
    while(right<n)
    {
        mp[s[right]]++;
        if(mp.size()>k)
         {
            mp[s[left]]--;
            if(mp[s[left]]==0)
            {
                mp.erase(s[left]);
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
  string  s="aaabbccd";
  int n=s.size();
  int k=2;
  cout<<solve(s,n,k);   
}

