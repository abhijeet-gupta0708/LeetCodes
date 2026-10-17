class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Perform Merging Array
        int s1=nums1.size();
        int s2=nums2.size();
        int n=s1-1;
        int m=s2-1;
        int s=s1+s2;
        nums1.resize(s);
        s-=1;

        while(n>=0 && m>=0)
        {
            if(nums1[n]>nums2[m])
            {
                nums1[s--]=nums1[n--];
            }
            else
            {
                nums1[s--]=nums2[m--];

            }
        }
        // Now checking is there any left values
        while(n>=0 && s>=0)
        {
            nums1[s--]=nums1[n--];
        }
        while(m>=0 && s>=0)
        {
            nums1[s--]=nums2[m--];
        }

        // Our array is ready now 
        double ans=0;
        int sz=s1+s2;
        if(sz%2==0)
        {
            int median=(sz)/2;
            ans+=nums1[median];
            ans+=nums1[median-1];
            ans/=2;
            
        }
        else
        {
            int median=(sz)/2;
            ans+=nums1[median];
        }

        return ans;

    }
};