// Pyramid Star Printing
//    *   
//   ***
//  *****
// *******

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // looping till rows
    for(int i = 0 ; i < rows ; i++){
        // internal loop to print spaces
        for(int j = 0 ; j < rows - i - 1; j++){
            cout << " ";
        }
        // internal loop to print stars
        for(int k = 0 ; k < 2 * i + 1; k++){
            cout << "*";
        }
        // to move to next row
        cout << endl;
    }
    return 0;
}
