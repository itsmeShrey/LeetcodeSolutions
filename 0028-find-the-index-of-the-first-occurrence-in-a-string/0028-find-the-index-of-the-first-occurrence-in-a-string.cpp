class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it=haystack.find(needle,0);
        return it;
    }
};