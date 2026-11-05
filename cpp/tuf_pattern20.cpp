#include <iostream>
using namespace std;

class Solution {
    public: 
        void pattern19(int n){
            for(int i = 1 ; i<=n; i++){
                for ( int j = 1 ; j <=i ; j++){
                    cout << "*";
                }

                for ( int k = 1; k<= 2* (n-i); k++){
                    cout << " ";
                }
                 for ( int j = 1 ; j <=i ; j++){
                    cout << "*";
                }
                cout <<endl;

            }

            for(int i = n-1 ; i>=1; i--){
                for ( int j = 1 ; j<=i ; j++){
                    cout << "*";
                }
                for ( int k=1; k<= 2*(n-i); k++){
                    cout << " ";
                }
                  for ( int j = 1 ; j <=i ; j++){
                    cout << "*";
                }
                cout <<endl;
            }
        }

};


int main (){
    Solution solver;
    solver.pattern19(5);
    return 0;
}