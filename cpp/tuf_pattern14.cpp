#include <iostream>
using namespace std;

class Solution { 
    public:
        void pattern14(int n){
            for (int i =1; i<=n; i++){
                char ch = 'A';
                for (int j = 1; j<=i; j++){
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }
        }
};

int main ( ){
    Solution solver;
    solver.pattern14(5);
    return 0;
}