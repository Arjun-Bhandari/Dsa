#include <iostream>
using namespace std;


class Solution {
    public:
        void pattern11(int n ){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    if((i+j)%2 ==0){
                        cout<<"1 ";
                    }else{
                        cout << "0 ";
                    }
                   
                }
                cout << endl;
            }
        }
};


int main (){
    Solution solver;
    solver.pattern11(5);
    return 0;
}