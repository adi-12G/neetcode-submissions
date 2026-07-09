class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int longest = 0;

        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }

        for(int i = 0; i < n; i++){
            int x = nums[i];

   if(st.count(x - 1) == 0){

            int curr = x;
                int length = 1;

                while(st.find(curr + 1) != st.end()){
                curr++;
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};