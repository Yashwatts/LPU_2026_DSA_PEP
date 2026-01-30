// https://leetcode.com/problems/valid-anagram/description/
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length()) return false;

//         int arr[26] = {0};

//         for(char i : s){
//             arr[i - 'a']++;
//         }
//         for(char i : t){
//             arr[i - 'a']--;
//             if(arr[i - 'a'] < 0) return false;
//         }
//         return true;
//     }
// };



// https://leetcode.com/problems/valid-palindrome/description/
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         // string s2 = "";
//         // for(int i=0; i<s.length(); i++){
//         //     if(isalnum(s[i])){
//         //         s2 += tolower(s[i]);
//         //     }
//         // }
//         // s = s2;
//         // reverse(s2.begin(), s2.end());
//         // return s == s2;

//         // OR

//         int l = 0;
//         int r = s.length() - 1;
//         while(l < r){
//             while(l<r && !isalnum(s[l])) l++;
//             while(l<r && !isalnum(s[r])) r--;

//             if(tolower(s[l]) != tolower(s[r])) return false;
//             l++;
//             r--;
//         }
//         return true;
//     }
// };



// https://leetcode.com/problems/valid-palindrome-ii/description/
// class Solution {
// public:
//     bool isPalindrome(string& s, int l, int r){
//         while(l < r){
//             if(s[l++] != s[r--]) return false;
//         }
//         return true;
//     }
//     bool validPalindrome(string s) {
//         int l = 0;
//         int r = s.size() - 1;

//         while(l < r){
//             if(s[l] == s[r]){
//                 l++;
//                 r--;
//             }
//             else{
//                 return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
//             }
//         }
//         return true;
//     }
// };



// https://leetcode.com/problems/is-subsequence/description/
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i = 0;
//         int j = 0;

//         while(i < s.length() && j < t.length()){
//             if(s[i] == t[j]) i++;
//             j++;
//         }
//         return i == s.length();
//     }
// };



// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1
// class Solution {
//   public:
//     string firstRepChar(string s) {
//         // code here.
//         // vector<int> chars(26, 0);
//         // for(int i=0; i<s.length(); i++){
//         //     if(chars[s[i] - 'a'] == 1){
//         //         return string(1, s[i]);
//         //     }
//         //     chars[s[i] - 'a']++;
//         // }
//         // return "-1";
        
//         // OR
        
//         string ans = "";
//         vector<bool> seen(256, false);
//         for(char i : s){
//             if(seen[i]){
//                 ans += i;
//                 return ans;
//             }
//             seen[i] = true;
//         }
//         return "-1";
//     }
// };