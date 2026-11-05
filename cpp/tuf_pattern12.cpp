#include <iostream>
using namespace std;

class Solution{
    public:
        void pattern12(int n){
            for (int i=1; i<=n; i++){
                for(int j=1; j<=i;j++){
                    cout << j;
                }

                for (int k=1; k<=2*(n-i); k++){
                    cout << " ";
                }

                for (int l=i; l>=1; l--){
                    cout << l;
                }

                cout << endl;
            }
        }
};

int main (){
    Solution solver;
    solver.pattern12(4);
    return 0;
}