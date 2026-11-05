#include <iostream>
using namespace std;

class Solution { 
    public:
        void pattern15(int n){
            for (int i = n; i>=1; i--){
                char ch = 'A';
                for (int j=1; j<=i; j++){
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }
        }
};

int main (){
    Solution solver;
    solver.pattern15(5);
    return 0;
}