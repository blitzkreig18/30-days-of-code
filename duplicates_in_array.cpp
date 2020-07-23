class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      /*  int n = nums.size();
        set <int> res;
        for(int i=0;i<=n;i++)
        {
            if(res.find(nums[i])==res.end())
            {
                res.insert(nums[i]);
            }
            else
            {
                return nums[i];
            }
        }

       return 0;
       */

       /* int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }


        return 0;
        */

        if(nums.size() > 1)
        {

        int hare = 0;
        int tortoise = 0;
        hare = nums[nums[hare]];
        tortoise = nums[tortoise];

        while(hare != tortoise)
        {
            hare=nums[nums[hare]];
            tortoise=nums[tortoise];
        }

        hare = 0;

        while(hare != tortoise)
        {
            hare=nums[hare];
            tortoise=nums[tortoise];
        }

        return hare;

        }

        return -1;




    }
};
