#include <iostream>
using namespace std;

class Solution {
    public:
        void pattern10(int n){
            for(int i=1; i<=n; i++){
                for (int j=1; j<=i; j++){
                    cout << "*";
                }
                cout<< endl;
            }
            for(int k=n; k>=1; k--){
                for (int l=1; l<k; l++){
                    cout << "*";
                }
                cout<< endl;
            }
        }
};

int main (){
    Solution solver;
    solver.pattern10(5);
    return 0;
}