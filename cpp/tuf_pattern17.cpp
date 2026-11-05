#include <iostream>
using namespace std;

class Solution {
    public :
        void pattern17(int n){
            for ( int i = 1; i <= n ; i++){
                for (int j = 1 ; j <= n-i ; j++){
                    cout << " ";
                }
                char ch = 'A';
                int breakpoint = i;
                for ( int k = 1 ; k <= (2*i-1); k++){
                    cout << ch;

                    if(k< breakpoint){
                        ch++;

                    }else {
                         ch--;
                    }
                }

                cout << endl;
            }
        }
};

int main (){
    Solution solver; 
    solver.pattern17(5);
    return 0;
}