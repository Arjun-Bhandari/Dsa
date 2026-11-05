#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for ( int i=0; i<nums.size(); i++ ){
            for(int j = i+1 ; j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    vector<int> arr = {nums[i], nums[j]};
                    return arr;
                }
            }
            
        }

        return {};
        
    }
};
*/
/*
class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement)) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }

        return {};
    }
};

int main (){
  
    Solution sol;
    vector<int> nums = {2,7,11,15};
    vector<int> result = sol.twoSum(nums, 9);
    for(int value:result){
    cout << value << " ";
   }
   cout << '\n';
    return 0;
}
*/

/*
class Solution{
    public:
        void moveZeros(vector<int>& nums) {
            int writeIndex = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    swap(nums[writeIndex], nums[i]);
                    writeIndex++;
                }
            }

            for (int value : nums) {
                cout << value << " ";
            }
        }
};

int main (){
    
    Solution sol;
    vector<int> arr = {0,1,0,3,12};
    sol.moveZeros(arr);
    return 0;
}
    */


    class Solution {
        public:
        bool containsDuplicate(vector <int>& nums){
            unordered_map<int, int> seen;
            for(int i =0; i<nums.size();i++){
                
                if(seen.count(nums[i])){
                    return true;
                }
                seen[nums[i]] = i;
            }

            return false;

        }
    };

    int main (){
        Solution sol;
        vector <int> arr = {1,2,3,1};
        cout << boolalpha << sol.containsDuplicate(arr) <<"\n";
        return 0;
    }