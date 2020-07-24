class Solution {
public:
    void sortColors(vector<int>& nums) {
     /*   int n = nums.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                a++;
            if(nums[i]==1)
                b++;
            if(nums[i]==2)
                c++;

        }
        for(int i=0;i<n;i++)
        {
           if(a>0)
           {
               nums[i]=0;
               --a;
               continue;
           }
            if(b>0)
           {
               nums[i]=1;
               --b;
                continue;
           }
            if(c>0)
           {
               nums[i]=2;
               --c;
               continue;
           }
        }
        */

        //--------------efficient solution------------------------

        int l=0;
        int temp;
        int h=nums.size()-1;
        for(int i=0; i<=nums.size();)
        {

           if(i>h)
           {
               break;
           }

             if(nums[i]==0)
            {
                temp=nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                l++;
                i++;
            }
            else if(nums[i]==2)
            {
                temp=nums[i];
                nums[i]=nums[h];
                nums[h]=temp;
                h--;

            }

            else
            {
                i++;
            }
        }
    }
};
