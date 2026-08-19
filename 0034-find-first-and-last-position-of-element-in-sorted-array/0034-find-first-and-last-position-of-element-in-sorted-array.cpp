int first(vector<int>&nums,int target )
{
    int start=0;
    int end=nums.size()-1;
    int ans=-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]== target)
        {
            ans=mid;
            end=mid - 1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return ans;

}


int last(vector<int>&nums,int target )
{
    int start=0;
    int end=nums.size()-1;
    int ans=-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]== target)
        {
            ans=mid;
            start=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {


        vector<int>ans(2,-1);
        if(nums.size()==0) return ans;

        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                ans[0]=0;
                ans[1]=0;
                return ans;
            }
            else{
                return ans;
            }
        }        
        int first_ans=first(nums,target);
        int last_ans=last(nums,target);

        ans[0]=first_ans;
        ans[1]=last_ans;

        return ans;
        
    }
};