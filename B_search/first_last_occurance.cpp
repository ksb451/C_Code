#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    int start=0;
    int end=nums.size()-1;
    int start_pos=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            start_pos=mid;
            end=mid-1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
    }
    int last_pos=-1;
    start=0;
    end=nums.size()-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            last_pos=mid;
            start=mid+1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
    }
    return {start_pos,last_pos};
}
