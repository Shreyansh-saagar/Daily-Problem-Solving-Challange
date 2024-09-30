// Square Star Pattern
// ****
// ****
// ****
// ****

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout<<"Enter row number: ";
    cin >> rows;

    // looping till rows
    for(int i = 0; i < rows; i++){
        //internal loop to print stars
        for(int j = 0; j < rows; j++){
            cout<<"*";
        }
        // to move to next row
        cout<<endl; 
    }
}