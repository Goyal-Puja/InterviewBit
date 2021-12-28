Input : [1, 2, 3]
Output : [1, 2, 4]
Explanation :

Given vector is [1, 2, 3].
The returned vector should be [1, 2, 4] as 123 + 1 = 124.

    vector<int> Solution::plusOne(vector<int> &A) 
    {
        reverse(A.begin(),A.end());
        vector<int> ans;
        int carry = 1;
        int sum;
        int n = A.size();
        for(int i=0;i<n;i++)
        {
            sum = A[i]+carry;
            ans.push_back(sum%10);
            carry = sum/10;
            
        }
        if(carry)
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }
        
        while(ans[ans.size()-1] == 0 && ans.size() > 1)
        {
            ans.pop_back();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }

