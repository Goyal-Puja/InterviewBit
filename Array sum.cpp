

    vector<int> sum(vector<int> &A, vector<int> &B, int n, int m){
        vector<int> ans; 
        int i = n - 1, j = m - 1;
        int carry = 0, s = 0;
        while (j >= 0) {
            s = A[i] + B[j] + carry;
            ans.push_back(s % 10);
            carry = s / 10;
            i--;
            j--;
        }
        while (i >= 0) {
            s = A[i] + carry;
            ans.push_back(s % 10);
            carry = s / 10;
            i--;
        }
        if (carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
        int n = A.size();
        int m = B.size();
        if (n >= m)
            return sum(A, B, n, m);
        else
            return sum(B, A, m, n);
    }
