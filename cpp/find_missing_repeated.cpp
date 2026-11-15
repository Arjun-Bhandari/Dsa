#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public:
        vector<int> findMissingAndRepeated(vector<vector<int>>& grid){
            int n = grid.size();
            int totalNumbers = n * n;
            int xorAll = 0;

            for ( int i =0; i< n; ++i){
                for (int j = 0 ; j < n ; ++j){
                    xorAll ^= grid[i][j];
                }
            }

            for (int i = 1; i <=totalNumbers; ++i){
                xorAll ^=i;
            }

            int firstGroup = 0 ;
            int secondGroup = 0;
            int mask = xorAll & (-xorAll);
            for (int i=0; i<n; ++i){
                for(int j = 0 ; j <n ; ++j){
                    if((mask & grid[i][j])!=0){
                    firstGroup ^= grid[i][j];
                    }else{
                        secondGroup ^=grid[i][j];
                    }
                }
              
            }
            for (int i = 1 ; i <= totalNumbers; ++i){
                if ( (mask & i) != 0 ){
                    firstGroup ^=i;
                
                }else{
                    secondGroup ^=i;
                }
            }

            for ( int i = 0; i < n; ++i  ){
                for (int j = 0; j <n; ++j){
                    if(grid[i][j]== firstGroup){
                        return { secondGroup, firstGroup};
                    }
                }
            }

            return  { firstGroup,secondGroup};




        //     int n = grid.size();
        //     int m = grid[0].size();
        //     vector<int> result(2, -1); // result[0] = missing, result[1] = repeated
        //     unordered_map<int, int> countMap;

        //     for (int i = 0; i < n; ++i) {
        //         for (int j = 0; j < m; ++j) {
        //             countMap[grid[i][j]]++;
        //         }
        //     }

        //     for (int i = 1; i <= n * m; ++i) {
        //         if (countMap[i] == 0) {
        //             result[0] = i; // missing number
        //         } else if (countMap[i] > 1) {
        //             result[1] = i; // repeated number
        //         }
        //     }

        //     return result;
        }
};



int main() {
    Solution solution;
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> result = solution.findMissingAndRepeated(grid);
    cout << "Missing number: " << result[0] << ", Repeated number: " << result[1] << endl;
    return 0;
}
