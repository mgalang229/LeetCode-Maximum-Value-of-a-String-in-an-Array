class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int mx = 0;
        for (string& str : strs) {
            bool num_only = true;
            for (char& c : str) {
                num_only &= isdigit(c);
            }
            if (num_only) {
                mx = max(mx, stoi(str));
            } else {
                int sz = str.size();
                mx = max(mx, sz);
            }
        }
        return mx;
    }
};
