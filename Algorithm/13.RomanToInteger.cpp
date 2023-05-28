/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
*/

class Solution {
public:
    string intToRoman(int num){
        int um = 0, c = 0, d = 0, u = 0;
        um = num/1000;
        c = (num%1000)/100;
        d = (num%100)/10;
        u = num%10;
        string romano = "";
        switch(um){
            case 1: romano += "M"; break;
            case 2: romano += "MM"; break;
            case 3: romano += "MMM";break;
        }
        switch(c){
            case 1: romano += "C";break;
            case 2: romano += "CC";break;
            case 3: romano += "CCC";break;
            case 4: romano += "CD";break;
            case 5: romano += "D";break;
            case 6: romano += "DC";break;
            case 7: romano += "DCC";break;
            case 8: romano += "DCCC";break;
            case 9: romano += "CM";break;  
        }
        switch(d){
            case 1: romano += "X";break;
            case 2: romano += "XX";break;
            case 3: romano += "XXX";break;
            case 4: romano += "XL";break;
            case 5: romano += "L";break;
            case 6: romano += "LX";break;
            case 7: romano += "LXX";break;
            case 8: romano += "LXXX";break;
            case 9: romano += "XC";break;  
        }
        switch(u){
            case 1: romano += "I";break;
            case 2: romano += "II";break;
            case 3: romano += "III";break;
            case 4: romano += "IV";break;
            case 5: romano += "V";break;
            case 6: romano += "VI";break;
            case 7: romano += "VII";break;
            case 8: romano += "VIII";break;
            case 9: romano += "IX";break;  
        }
        return romano;
    }
    int romanToInt(string num) {
        int numero = 0;
        for(int i = 1; i < 4000; i++){
            if(num == intToRoman(i)){
                numero = i;
                break;
            }
        }
        return numero;
    }
};