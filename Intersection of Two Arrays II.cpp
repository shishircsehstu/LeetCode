/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

*/


class Solution {
public:
    int isVisited[1001];
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        
        for(int i=0;i<n1;i++){
            isVisited[nums1[i]]+=1;
        }
        nums1.clear();
        
        int n2=nums2.size();
        
          for(int i=0;i<n2;i++){
              
          if (isVisited[nums2[i]]>0){
              nums1.push_back(nums2[i]);
              isVisited[nums2[i]]--;
          }
        }
        return nums1;
    }
};
