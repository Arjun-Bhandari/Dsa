#include <iostream>
using namespace std;

class Solution {
    public:
        void pattern13(int n ){
            int num = 1;
           for (int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){
                cout << num << " ";
                num++;
            }
            cout << endl;
           } 
        }
};

int main ( ){
    Solution solver;
    solver.pattern13(5);
    return 0;
}