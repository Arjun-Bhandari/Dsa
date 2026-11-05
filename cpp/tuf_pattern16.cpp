#include <iostream>
using namespace std;

class Solution {
    public:
        void pattern16(int n ){
            for (int i = 1; i<=n; i ++ ){

                char ch = 'A' + i - 1;
                for ( int j = 1; j <= i; j++){
                    cout << ch;
                }
                cout << endl;
            }
        }
};

int main (){
    Solution solver;
    solver.pattern16(5);
    return 0;
}