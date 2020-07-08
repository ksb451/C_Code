#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>>ans;
    for (int i=0;i<n-2;i++)
    {
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
        int l = i+1;
        int r= n-1;
        while(l<r)
        {
            int sum=nums[i]+nums[l]+nums[r];
            if(sum < 0)
            {
                l++;
            }
            else if(sum > 0)
            {
                r--;
            }
            else{
                ans.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1])
                    l++;
                while(l<r && nums[r]==nums[r-1])
                    r--;
                l++;
                r--;
                
            }
        }
    }
    return ans;
}
