// Inverted Pyramid Printing
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++){
        int space = i;
        for(int j = 0; j < 2 * rows - i - 1; j++){
            if(space){
                cout<<" ";
                space--;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

// ******* i = 0 , space = 0
// -*****- i = 1 , space = 1
// --***-- i = 2 , space = 2
// ---*--- i = 3 , space = 3
