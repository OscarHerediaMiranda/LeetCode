/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int pos = 0;
        bool flag = false;
        string resp = "";

        int minimo = 200;
        for(int i = 0; i < strs.size(); i++){
            if(  strs[i].size() < minimo ){
                minimo = strs[i].size();
            }
        }

        for( int j = 0; j < minimo && !false; j++ )
        {
            char c = strs[0][pos];
            for(int i = 1; i < strs.size(); i++)
            {
                if(strs[i][pos] != c){
                    flag = true;
                    break;
                }   
            }
            if(!flag){
                resp = resp + c;
                pos++;
            }
        } 
        return resp;
    }
};