/*
 * @lc app=leetcode id=917 lang=cpp
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int  l = 0,h =s.size()-1;
        while(l<h){
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l],s[h]);
                l++,h--;
            }
            else if(! isalpha(s[l])){
                l++;
            }
            else{
                // s[h] --> non alpha
                h--;
            }
        }
        return s;
    } 
};
// @lc code=end

