class Solution {
   public:
    bool isPalindrome(string s) {
        s.erase(
            std::remove_if(s.begin(), s.end(), [](unsigned char c) { return !std::isalnum(c); }),
            s.end());

        for (auto& x : s) {
            x = (char)std::tolower(x);
        }
        if (s.empty()) return true;

        auto left = s.begin();
        auto right = s.end() - 1;

        while (left < right) {
            if (*left != *right) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
