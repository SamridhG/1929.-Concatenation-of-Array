class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>A;
        for(auto a:nums)
        {
            A.push_back(a);
        }
        for(auto a:nums)
        {
            A.push_back(a);
        }
        return A;
    }
};
