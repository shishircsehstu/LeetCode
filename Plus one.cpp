

//Problem 

/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/


class Solution {
public:
        
       vector<int> plusOne(vector<int>& digits) {
           
        vector<int> resVec;
        int n= digits.size();
        int carray = 0;
        n=n-1;
        int sum;
        while (n>=0) {
            
            if(n==digits.size()-1){
                 sum=digits[n]+1;
                
            }else{
                sum=digits[n]+carray;
            }
            carray = sum/10;
            int remainder = sum%10;
            resVec.push_back(remainder);
            n--;
            
        }
           if(carray){
                 resVec.push_back(carray);
          }
        reverse(resVec.begin(),resVec.end());
        
        return resVec;
        
    }
};
